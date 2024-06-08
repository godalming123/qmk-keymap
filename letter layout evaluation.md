# Letter layout evaluation

A method of evaluating layouts for the letter keys that works by finding how much penalty should be applied for each key press that is needed to type some piece of sample text. This method is designed for column stagger keyboards with 3 rows, 4 columns, and 3 thumb keys on each split half for a total of 30 keys. This can be used for generating keyboard layouts that are optimized to type a specific piece of text by creating a set of layouts that have randomly arranged keys, and then finding the layout that has the lowest average letter penalty. It can also be used for evaluating how good existing keyboard layouts are. Here is a list of all of the penalties:

## Movement penalty
Apply a movement penalty of `(1.5f)/(n+1)` where `f` is the finger movement since last use, and `n` is the number of keypresses that the finger has not been used for.
TODO: Consider making n negative when the finger has been used for several keypresses in a row

## Finger penalty
Here are the following penalties for the different fingers:
| Finger | Penalty |
| ------ | ------- |
| Thumb  | 0.8     |
| Index  | 1.1     |
| Middle | 1.0     |
| Ring   | 1.3     |
| Pinkie | 1.6     |

## Same hand penalty
If the same hand has been used consecutively, apply a penalty of `0.2*(number_of_times_that_this_hand_has_been_consecutively_used-1)`.

## Row penalty
Here are the following penalties for the different rows:
| Row         | Penalty |
| ----------- | ------- |
| Home        | 0.0     |
| Outer thumb | 0.1     |
| Inner thumb | 0.12    |
| Lower       | 0.2     |
| Upper       | 0.3     |

## TODO: Give a penalty for contortions
For example, if in QWERTY you type `wz`, then that should give a very big penalty. However, if you type `rz`, then that should give a much smaller penalty. An algorithm for this would also need to have some reduction in the penalty for every key pressed on the other hand between the contortion (EG: `whz`), as well as a reduction in the penalty when there is less distance between the rows in the contortion (EG: `wa`).

# Penalties that are being considered

These penalties might not be necessary because of the existing penalties.

## Same finger penalty?
If the same finger has been used consecutively, apply a penalty of `((number_of_times_that_this_finger_has_been_consecutively_used+1)^2)-1` as well as `the_amount_of_keys_that_this_finger_has_moved_since_the_last_keypress`.

## Give an incentive for equal use of hands?
