#include QMK_KEYBOARD_H
#include "features/achordion.h"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRANSPARENT, KC_TRANSPARENT, KC_Q,
        KC_W, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U,
        KC_I, KC_O, KC_P, KC_BSLS, KC_TRANSPARENT, MT(MOD_LCTL, KC_A),
        MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_D), MT(MOD_LGUI, KC_F), KC_G,
        KC_TILD, KC_TRANSPARENT, KC_H, MT(MOD_RGUI, KC_J), MT(MOD_RSFT, KC_K),
        MT(MOD_RALT, KC_L), MT(MOD_RCTL, KC_SCLN), KC_QUOTE, KC_TRANSPARENT,
        KC_Z, KC_X, KC_C, LT(3, KC_V), KC_B, KC_N, KC_M, KC_COMMA, KC_DOT,
        KC_SLASH, KC_TRANSPARENT, TT(2), KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, TT(1), TD(DANCE_0), KC_ESCAPE, TT(1), KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_BSPC,
        TT(4), KC_SPACE, KC_TAB, KC_ENTER),
    [1] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,
        KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL, KC_LBRC,
        KC_RBRC, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS, TD(DANCE_1),
        TD(DANCE_2), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_EXLM, KC_AT, KC_HASH, KC_DLR,
        KC_PERC, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_F12,
        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,
        KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_SPACE, RGB_VAD,
        RGB_VAI, RGB_MODE_FORWARD, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN,
        KC_AUDIO_VOL_UP),
    [3] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME, KC_PGDN, KC_PAGE_UP, KC_END,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,
        KC_INSERT, KC_PSCR, KC_DELETE, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_T)), LGUI(LCTL(KC_GRAVE)),
        LGUI(LCTL(KC_C)), LGUI(LCTL(KC_O)), LGUI(LCTL(KC_P)), KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        LGUI(LCTL(KC_H)), LGUI(LCTL(KC_J)), LGUI(LCTL(KC_K)), LGUI(LCTL(KC_L)),
        LGUI(LCTL(KC_R)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        LGUI(LCTL(KC_N)), LGUI(LCTL(KC_M)), LGUI(LCTL(KC_COMMA)),
        LGUI(LCTL(KC_DOT)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_LEFT)),
        LGUI(LCTL(KC_DOWN)), LGUI(LCTL(KC_UP)), LGUI(LCTL(KC_RIGHT)),
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};
const uint16_t PROGMEM combo0[] = {MT(MOD_RGUI, KC_J), MT(MOD_RSFT, KC_K),
                                   COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
};

void matrix_scan_user(void) { achordion_task(); }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) {
    return false;
  }
  switch (keycode) {

  case RGB_SLD:
    if (rawhid_state.rgb_control) {
      return false;
    }
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

typedef struct {
  bool is_press_action;
  uint8_t step;
} tap;

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD,
  DOUBLE_TAP,
  DOUBLE_HOLD,
  DOUBLE_SINGLE_TAP,
  MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->interrupted || !state->pressed)
      return SINGLE_TAP;
    else
      return SINGLE_HOLD;
  } else if (state->count == 2) {
    if (state->interrupted)
      return DOUBLE_SINGLE_TAP;
    else if (state->pressed)
      return DOUBLE_HOLD;
    else
      return DOUBLE_TAP;
  }
  return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
  if (state->count == 3) {
    tap_code16(LALT(KC_X));
    tap_code16(LALT(KC_X));
    tap_code16(LALT(KC_X));
  }
  if (state->count > 3) {
    tap_code16(LALT(KC_X));
  }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[0].step = dance_step(state);
  switch (dance_state[0].step) {
  case SINGLE_TAP:
    register_code16(LALT(KC_X));
    break;
  case SINGLE_HOLD:
    register_code16(KC_CAPS);
    break;
  case DOUBLE_TAP:
    register_code16(LALT(KC_X));
    register_code16(LALT(KC_X));
    break;
  case DOUBLE_SINGLE_TAP:
    tap_code16(LALT(KC_X));
    register_code16(LALT(KC_X));
  }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[0].step) {
  case SINGLE_TAP:
    unregister_code16(LALT(KC_X));
    break;
  case SINGLE_HOLD:
    unregister_code16(KC_CAPS);
    break;
  case DOUBLE_TAP:
    unregister_code16(LALT(KC_X));
    break;
  case DOUBLE_SINGLE_TAP:
    unregister_code16(LALT(KC_X));
    break;
  }
  dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
  if (state->count == 3) {
    tap_code16(KC_LPRN);
    tap_code16(KC_LPRN);
    tap_code16(KC_LPRN);
  }
  if (state->count > 3) {
    tap_code16(KC_LPRN);
  }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[1].step = dance_step(state);
  switch (dance_state[1].step) {
  case SINGLE_TAP:
    register_code16(KC_LPRN);
    break;
  case SINGLE_HOLD:
    register_code16(KC_RIGHT_GUI);
    break;
  case DOUBLE_TAP:
    register_code16(KC_LPRN);
    register_code16(KC_LPRN);
    break;
  case DOUBLE_SINGLE_TAP:
    tap_code16(KC_LPRN);
    register_code16(KC_LPRN);
  }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[1].step) {
  case SINGLE_TAP:
    unregister_code16(KC_LPRN);
    break;
  case SINGLE_HOLD:
    unregister_code16(KC_RIGHT_GUI);
    break;
  case DOUBLE_TAP:
    unregister_code16(KC_LPRN);
    break;
  case DOUBLE_SINGLE_TAP:
    unregister_code16(KC_LPRN);
    break;
  }
  dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
  if (state->count == 3) {
    tap_code16(KC_RPRN);
    tap_code16(KC_RPRN);
    tap_code16(KC_RPRN);
  }
  if (state->count > 3) {
    tap_code16(KC_RPRN);
  }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[2].step = dance_step(state);
  switch (dance_state[2].step) {
  case SINGLE_TAP:
    register_code16(KC_RPRN);
    break;
  case SINGLE_HOLD:
    register_code16(KC_RIGHT_SHIFT);
    break;
  case DOUBLE_TAP:
    register_code16(KC_RPRN);
    register_code16(KC_RPRN);
    break;
  case DOUBLE_SINGLE_TAP:
    tap_code16(KC_RPRN);
    register_code16(KC_RPRN);
  }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[2].step) {
  case SINGLE_TAP:
    unregister_code16(KC_RPRN);
    break;
  case SINGLE_HOLD:
    unregister_code16(KC_RIGHT_SHIFT);
    break;
  case DOUBLE_TAP:
    unregister_code16(KC_RPRN);
    break;
  case DOUBLE_SINGLE_TAP:
    unregister_code16(KC_RPRN);
    break;
  }
  dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished,
                                             dance_0_reset),
    [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished,
                                             dance_1_reset),
    [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished,
                                             dance_2_reset),
};
