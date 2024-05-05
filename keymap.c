#include QMK_KEYBOARD_H
#define EE_HANDS

// Macros to abbreviate long keypresses, so that they fit into the key grid
#define SPACE SFT_T(KC_SPC)
#define BSPC LT(1, KC_BSPC)

// Mouse movement combos
const uint16_t PROGMEM mouse_move_left[]  = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM mouse_move_down[]  = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM mouse_move_up[]    = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM mouse_move_right[] = {KC_O, KC_L, COMBO_END};

// Mouse wheel combos
const uint16_t PROGMEM mouse_scroll_left[]  = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM mouse_scroll_down[]  = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM mouse_scroll_up[]    = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM mouse_scroll_right[] = {KC_Q, KC_A, COMBO_END};

// Arrow key combos
const uint16_t PROGMEM arrow_left[]  = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM arrow_down[]  = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM arrow_up[]    = {KC_K, KC_P, COMBO_END};
const uint16_t PROGMEM arrow_right[] = {KC_L, KC_B, COMBO_END};

// Other movement key combos
const uint16_t PROGMEM home[]      = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM page_down[] = {KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM page_up[]   = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM end[]       = {KC_F, KC_V, COMBO_END};

// Other key combos
const uint16_t PROGMEM mouse1[]         = {SPACE, KC_G,   COMBO_END};
const uint16_t PROGMEM mouse2[]         = {SPACE, KC_ENT, COMBO_END};
const uint16_t PROGMEM backspace_word[] = {BSPC,  KC_T,   COMBO_END};
const uint16_t PROGMEM delete[]         = {BSPC,  KC_ESC, COMBO_END};

// Define combos
combo_t key_combos[] = {
    COMBO(mouse_move_left,  KC_MS_LEFT),
    COMBO(mouse_move_down,  KC_MS_DOWN),
    COMBO(mouse_move_up,    KC_MS_UP),
    COMBO(mouse_move_right, KC_MS_RIGHT),

    COMBO(mouse_scroll_left,  KC_WH_R),
    COMBO(mouse_scroll_down,  KC_WH_U),
    COMBO(mouse_scroll_up,    KC_WH_D),
    COMBO(mouse_scroll_right, KC_WH_L),

    COMBO(arrow_left,  KC_LEFT),
    COMBO(arrow_down,  KC_DOWN),
    COMBO(arrow_up,    KC_UP),
    COMBO(arrow_right, KC_RIGHT),

    COMBO(home,      KC_HOME),
    COMBO(page_down, KC_PGDN),
    COMBO(page_up,   KC_PGUP),
    COMBO(end,       KC_END),

    COMBO(mouse1,         KC_BTN1),
    COMBO(mouse2,         KC_BTN2),
    COMBO(backspace_word, LCTL(KC_BSPC)),
    COMBO(delete,         KC_DEL),
};

// Keymap (flipped because my keyboard flips the keymap for some reason)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //.-----------------------------------------------------.                    .-----------------------------------------------------.
      XXXXXXX,    KC_O,    KC_I,    KC_U,    KC_Y, XXXXXXX,                      XXXXXXX,    KC_R,    KC_E,    KC_W,   KC_Q,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_L,    KC_K,    KC_J,    KC_H, XXXXXXX,                      XXXXXXX,    KC_F,    KC_D,    KC_S,   KC_A,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_B,    KC_P,    KC_M,    KC_N, XXXXXXX,                      XXXXXXX,    KC_V,    KC_C,    KC_X,   KC_Z,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------|
                                           KC_ENT,   SPACE,    KC_G,       KC_T,    BSPC,  KC_ESC
  //                                    `--------------------------`  `--------------------------`
  ),

  [1] = LAYOUT_split_3x6_3(
  //.-----------------------------------------------------.                    .-----------------------------------------------------.
      XXXXXXX, XXXXXXX, KC_BSLS, KC_QUOT, KC_SCLN, XXXXXXX,                      XXXXXXX, KC_MINS,  KC_EQL,  KC_GRV, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_0,    KC_9,    KC_8,    KC_7, XXXXXXX,                      XXXXXXX,    KC_4,    KC_3,    KC_2,    KC_1, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SLSH,  KC_DOT, KC_COMM,    KC_6, XXXXXXX,                      XXXXXXX,    KC_5, KC_LBRC, KC_RBRC,   KC_F7, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  KC_TAB,    XXXXXXX, XXXXXXX, _______
  //                                    `--------------------------`  `--------------------------`
  ),
};
