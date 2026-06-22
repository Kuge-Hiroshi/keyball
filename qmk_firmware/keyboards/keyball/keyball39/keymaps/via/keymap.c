/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"



// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default (VIA)
  [0] = LAYOUT_universal(
    KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                            KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     ,
    KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                            KC_H     , KC_J     , KC_K     , KC_L     , KC_MINS  ,
    KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                            KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  ,
    KC_LCTL  , KC_LGUI  , KC_LALT  ,LSFT_T(KC_LNG2),LT(1,KC_SPC),LT(3,KC_LNG1),KC_BSPC,LT(2,KC_ENT),LSFT_T(KC_LNG2),KC_RALT,KC_RGUI, KC_RSFT
  ),

  [1] = LAYOUT_universal(
    KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_RBRC  ,                            KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   ,
    KC_F5    , KC_EXLM  , S(KC_6)  ,S(KC_INT3), S(KC_8)  ,                           S(KC_INT1), KC_BTN1  , KC_PGUP  , KC_BTN2  , KC_SCLN  ,
    S(KC_EQL),S(KC_LBRC),S(KC_7)   , S(KC_2)  ,S(KC_RBRC),                            KC_LBRC  , KC_DLR   , KC_PGDN  , KC_BTN3  , KC_F11   ,
    KC_INT1  , KC_EQL   , S(KC_3)  , _______  , _______  , _______  ,      TO(2)    , TO(0)    , _______  , KC_RALT  , KC_RGUI  , KC_F12
  ),

  [2] = LAYOUT_universal(
    KC_TAB   , KC_7     , KC_8     , KC_9     , KC_MINS  ,                            KC_NUHS  , _______  , KC_BTN3  , _______  , KC_BSPC  ,
   S(KC_QUOT), KC_4     , KC_5     , KC_6     ,S(KC_SCLN),                            S(KC_9)  , KC_BTN1  , KC_UP    , KC_BTN2  , KC_QUOT  ,
    KC_SLSH  , KC_1     , KC_2     , KC_3     ,S(KC_MINS),                           S(KC_NUHS), KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  ,
    KC_ESC   , KC_0     , KC_DOT   , KC_DEL   , KC_ENT   , KC_BSPC  ,      _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  ,                            _______  , _______  , SSNP_HOR , SSNP_VRT , SSNP_FRE ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , SCRL_DVI ,                            _______  , _______  , _______  , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , SCRL_DVD ,                            CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE ,
    QK_BOOT  , KBC_RST  , _______  , _______  , _______  , _______  ,      _______  , _______  , _______  , _______  , KBC_RST  , QK_BOOT
  ),

  [4] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  ,                            _______  , _______  , SSNP_HOR , SSNP_VRT , SSNP_FRE ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , SCRL_DVI ,                            _______  , _______  , _______  , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , SCRL_DVD ,                            CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE ,
    QK_BOOT  , KBC_RST  , _______  , _______  , _______  , _______  ,      _______  , _______  , _______  , _______  , KBC_RST  , QK_BOOT
  ),

  [5] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  ,                            _______  , _______  , SSNP_HOR , SSNP_VRT , SSNP_FRE ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , SCRL_DVI ,                            _______  , _______  , _______  , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , SCRL_DVD ,                            CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE ,
    QK_BOOT  , KBC_RST  , _______  , _______  , _______  , _______  ,      _______  , _______  , _______  , _______  , KBC_RST  , QK_BOOT
  ),
  [6] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  ,                            _______  , _______  , SSNP_HOR , SSNP_VRT , SSNP_FRE ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , SCRL_DVI ,                            _______  , _______  , _______  , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , SCRL_DVD ,                            CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE ,
    QK_BOOT  , KBC_RST  , _______  , _______  , _______  , _______  ,      _______  , _______  , _______  , _______  , KBC_RST  , QK_BOOT
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);

    // AML保持用
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    keyball_handle_auto_mouse_layer_change(state);
#endif
    return state;
}

void keyboard_post_init_user(void) {
    // 縦スクロール固定
    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_VERTICAL);

    // CPI = 500
    keyball_set_cpi(5);

    // スクロール速度 = 7
    keyball_set_scroll_div(7);

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    set_auto_mouse_enable(true);
#endif
}




#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif


#ifdef COMBO_ENABLE
enum combo_events {
  PARENTHESES,
  SQUARE_BRACKETS,
  CURLY_BRACKETS,
  HASH_TAG,
  AT_MARK,
  SEMICOLON,
  COLON,
  SINGLE_QUOTE,
  DOUBLE_QUOTE,
  EXCLAMATION,
  YEN_MARK,
  COMBO_COUNT
};

const uint16_t PROGMEM paren_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM sqbra_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM cubra_combo[] = {KC_COMM, KC_DOT, COMBO_END};
// const uint16_t PROGMEM paste_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM hash_combo[] = {KC_I, KC_U, COMBO_END};
const uint16_t PROGMEM at_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM exclamation_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM semicolon_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM colon_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM singleq_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM doubleq_combo[] = {KC_C, KC_X, COMBO_END};
const uint16_t PROGMEM yen_combo[] = {KC_E, KC_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [PARENTHESES] = COMBO_ACTION(paren_combo),
  [SQUARE_BRACKETS] = COMBO_ACTION(sqbra_combo),
  [CURLY_BRACKETS] = COMBO_ACTION(cubra_combo),
  // [PASTE_VALUE] = COMBO_ACTION(paste_combo),
  [HASH_TAG] = COMBO_ACTION(hash_combo),
  [AT_MARK] = COMBO_ACTION(at_combo),
  [EXCLAMATION] = COMBO_ACTION(exclamation_combo),
  [SEMICOLON] = COMBO_ACTION(semicolon_combo),
  [COLON] = COMBO_ACTION(colon_combo),
  [SINGLE_QUOTE] = COMBO_ACTION(singleq_combo),
  [DOUBLE_QUOTE] = COMBO_ACTION(doubleq_combo),
  [YEN_MARK] = COMBO_ACTION(yen_combo)
};
// COMBO_ACTION(x) is same as COMBO(x, KC_NO)

// Comboの状態管理
// static bool combo_key_press_active[COMBO_COUNT] = { false };

void process_combo_event(uint16_t combo_index, bool pressed) {
  // combo_key_press_active[combo_index] = pressed;  // Comboが押されている間はTRUE、離すとFALSE
  
  switch(combo_index) {
    case PARENTHESES:
      if (pressed) {
        tap_code16(S(KC_9));
        tap_code16(S(KC_0));
      }
      break;
    case SQUARE_BRACKETS:
      if (pressed) {
        tap_code(KC_LBRC);
        tap_code(KC_RBRC);
      }
      break;
    case CURLY_BRACKETS:
      if (pressed) {
        tap_code16(S(KC_LBRC));
        tap_code16(S(KC_RBRC));
      }
      break;
    // case PASTE_VALUE:
    //   if (pressed) {
    //     tap_code16(C(S(KC_V)));
    //   }
    //   break;  
    case HASH_TAG:
      if (pressed) {
        tap_code16(KC_HASH);
      }
      break;
    case AT_MARK:
      if (pressed) {
        tap_code16(KC_AT);
      }
      break;
    case EXCLAMATION:
      if (pressed) {
        tap_code16(S(KC_1));
      }
      break;
    case SEMICOLON:
      if (pressed) {
        tap_code16(KC_SCLN);
      }
      break;    
      case COLON:
      if (pressed) {
        tap_code16(S(KC_SCLN));
      }
      break;
    case SINGLE_QUOTE:
      if (pressed) {
        tap_code16(KC_QUOT);
      }
      break;
    case DOUBLE_QUOTE:
      if (pressed) {
        tap_code16(S(KC_QUOT));
      }
      break;
    case YEN_MARK:
      if (pressed) {
        tap_code16(KC_BSLS);
      }
      break;
  }
}


#endif  // COMBO_ENABLE

// ==============================
// Kb21 + トラックボールで Alt+Tab 操作
// ==============================
// Remap の Kb 21 を押している間だけ、ボール移動をアプリ切り替え操作に変換します。
//   Kb21 + 上    : Alt+Tab 画面を開く
//   Kb21 + 右    : 次のアプリへ移動
//   Kb21 + 左    : 前のアプリへ移動
//   Kb21 を離す  : Alt を離して選択を確定
//
// 感度を変えたい場合はこの数値を調整してください。
// 小さいほど少しのボール移動で反応します。
#define APP_SWITCH_GESTURE_THRESHOLD 300

static bool app_switch_mode   = false;
static bool alt_tab_active    = false;
static int16_t app_switch_x   = 0;
static int16_t app_switch_y   = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        // Remap の Kb 20
        // レイヤー3中だけ、押している間は横スクロールにする
        case QK_KB_20:
            if (layer_state_is(3)) {
                if (record->event.pressed) {
                    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_HORIZONTAL);
                } else {
                    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_VERTICAL);
                }
                return false;
            }
            return true;

        // Remap の Kb 21
        // 押している間だけ、トラックボール操作を Alt+Tab 操作に変換する
        case QK_KB_21:
            app_switch_mode = record->event.pressed;

            // Kb21 を離したら Alt を離して、選択中のアプリに確定する
            if (!app_switch_mode && alt_tab_active) {
                unregister_code(KC_LALT);
                alt_tab_active = false;
            }

            app_switch_x = 0;
            app_switch_y = 0;
            return false;
    }

    return true;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (app_switch_mode) {
        app_switch_x += mouse_report.x;
        app_switch_y += mouse_report.y;

        // Kb21 押下中はカーソルを動かさない
        mouse_report.x = 0;
        mouse_report.y = 0;

        // 上方向: Alt+Tab 画面を開く
        // 環境によって上下が逆に感じる場合は、"<" を ">" に変更してください。
        if (app_switch_y < -APP_SWITCH_GESTURE_THRESHOLD && !alt_tab_active) {
            register_code(KC_LALT);
            tap_code(KC_TAB);
            alt_tab_active = true;
            app_switch_x = 0;
            app_switch_y = 0;
        }

        // 右方向: 次のアプリへ
        if (app_switch_x > APP_SWITCH_GESTURE_THRESHOLD && alt_tab_active) {
            tap_code(KC_TAB);
            app_switch_x = 0;
        }

        // 左方向: 前のアプリへ
        if (app_switch_x < -APP_SWITCH_GESTURE_THRESHOLD && alt_tab_active) {
            tap_code16(S(KC_TAB));
            app_switch_x = 0;
        }
    }

    return mouse_report;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_LNG2):  // tap: Lang2 / hold: Shift
        case LCTL_T(KC_LNG1):  // tap: Lang1 / hold: Ctrl
            return true;
        default:
            return false;
    }
}
