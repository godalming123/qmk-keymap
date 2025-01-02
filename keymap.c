#include QMK_KEYBOARD_H
#define EE_HANDS

// Macros to abbreviate long keypresses, so that they fit into the key grid
#define ESC   ALT_T(KC_ESC)
#define SPACE SFT_T(KC_SPC)
#define ENTER CTL_T(KC_ENT)
#define BSPC  LT(1, KC_BSPC)

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
const uint16_t PROGMEM mouse1[] = {SPACE, ENTER, COMBO_END};
const uint16_t PROGMEM mouse2[] = {SPACE, ESC,   COMBO_END};
const uint16_t PROGMEM tab[]    = {BSPC,  KC_T,  COMBO_END};
const uint16_t PROGMEM delete[] = {BSPC,  KC_G,  COMBO_END};

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

    COMBO(mouse1, KC_BTN1),
    COMBO(mouse2, KC_BTN2),
    COMBO(tab,    KC_TAB),
    COMBO(delete, KC_DEL),
};

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3( 
  // ╭────────┬────────┬────────┬────────┬────────┬────────╮                    ╭────────┬────────┬────────┬────────┬────────┬────────╮
       XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R, XXXXXXX,                      XXXXXXX,    KC_Y,    KC_U,    KC_I,   KC_O,  XXXXXXX,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤                    ├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F, XXXXXXX,                      XXXXXXX,    KC_H,    KC_J,    KC_K,   KC_L,  XXXXXXX,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤                    ├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V, XXXXXXX,                      XXXXXXX,    KC_N,    KC_M,    KC_P,   KC_B,  XXXXXXX,
  // ╰────────┴────────┴────────┴────────┼────────┼────────┼────────╮  ╭────────┼────────┼────────┼────────┴────────┴────────┴────────╯
                                              KC_G,    BSPC,    KC_T,      ENTER,   SPACE,     ESC
  //                                     ╰────────┴────────┴────────╯  ╰────────┴────────┴────────╯
  ),

  [1] = LAYOUT_split_3x6_3(
  // ╭────────┬────────┬────────┬────────┬────────┬────────╮                    ╭────────┬────────┬────────┬────────┬────────┬────────╮
       XXXXXXX, XXXXXXX,  KC_GRV, KC_MINS,  KC_EQL, XXXXXXX,                      XXXXXXX, KC_SCLN, KC_QUOT, KC_BSLS, XXXXXXX, XXXXXXX,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤                    ├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4, XXXXXXX,                      XXXXXXX,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  // ├────────┼────────┼────────┼────────┼────────┼────────┤                    ├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX,   KC_F7, KC_LBRC, KC_RBRC,    KC_5, XXXXXXX,                      XXXXXXX,    KC_6, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX, // F7 is the key that I use to enter my BIOS
  // ╰────────┴────────┴────────┴────────┼────────┼────────┼────────╮  ╭────────┼────────┼────────┼────────┴────────┴────────┴────────╯
                                           XXXXXXX, XXXXXXX, XXXXXXX,    _______, _______, _______
  //                                     ╰────────┴────────┴────────╯  ╰────────┴────────┴────────╯
  ),
};
