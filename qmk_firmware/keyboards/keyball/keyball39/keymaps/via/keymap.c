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
  [7] = LAYOUT_universal(
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
  END_KEY,
  HOME_KEY,
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
const uint16_t PROGMEM end_combo[]  = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM home_combo[] = {KC_O, KC_P, COMBO_END};

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
  [END_KEY]  = COMBO_ACTION(end_combo),
  [HOME_KEY] = COMBO_ACTION(home_combo)
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
        case END_KEY:
      if (pressed) {
        tap_code(KC_END);
      }
      break;

    case HOME_KEY:
      if (pressed) {
        tap_code(KC_HOME);
      }
      break;
  }
}


#endif  // COMBO_ENABLE
// ==============================
// Kb21 / Kb22 + トラックボール ジェスチャー
// ==============================
// Kb20:
//   既存機能のまま
//   レイヤー3中だけ、押している間は横スクロールにする
//
// Kb21:
//   Kb21 + 上    : Win+Tab
//   Kb21 + 左    : 仮想デスクトップ左へ移動
//   Kb21 + 右    : 仮想デスクトップ右へ移動
//   Kb21 + 下    : デスクトップ表示
//
// Kb22:
//   Kb22 + 上    : Alt+Tab 画面を開く
//   Kb22 + 右    : 次のアプリへ移動
//   Kb22 + 左    : 前のアプリへ移動
//   Kb22 + 下    : Alt+F4
//   Kb22 を離す  : Alt を離して選択を確定
//
// Kb23:
//   Kb23 + 上    : Alt+Space -> X で最大化
//   Kb23 + 下    : Alt+Space -> N で最小化
//   Kb23 + 右    : アクティブウィンドウを右側へ寄せ、左側のウィンドウ選択をEscでキャンセル
//   Kb23 + 左    : アクティブウィンドウを左側へ寄せ、右側のウィンドウ選択をEscでキャンセル
//
// Kb27:
//   Kb27 + 上    : ↑
//   Kb27 + 下    : ↓
//   Kb27 + 左    : ←
//   Kb27 + 右    : →
// Kb28:
//   Kb28 + 上    : 新規タブ Ctrl+T
//   Kb28 + 下    : 現在のタブを閉じる Ctrl+W
//   Kb28 + 左    : 左のタブへ Ctrl+Shift+Tab
//   Kb28 + 右    : 右のタブへ Ctrl+Tab
// 感度を変えたい場合はこの数値を調整してください。
// 小さいほど少しのボール移動で反応します。
// 例: 100=高感度 / 300=低感度 / 1000以上=かなり鈍い
#define GESTURE_THRESHOLD 210

// Kb27専用の矢印キー用しきい値
// 数値を大きくすると、より大きく転がした時だけ矢印キーが入力されます。
#define GESTURE27_X_THRESHOLD 600
#define GESTURE27_Y_THRESHOLD 500

// Keyball 初期設定値
#define DEFAULT_SCROLL_DIV 7
#define KB24_SCROLL_DIV    5  // Kb24: DIVを9にする 7 -> 5
#define DEFAULT_CPI        5  // 5 = 500 CPI
#define KB25_CPI           3  // Kb25: CPIを200下げる 500 -> 300

static bool gesture_mode_21 = false;
static bool gesture_mode_22 = false;
static bool gesture_mode_23 = false;
static bool gesture_mode_26 = false;
static bool gesture_mode_27 = false;
static bool gesture_mode_28 = false;
static bool alt_tab_active  = false;
static bool snap_assist_mode = false;
static bool kb24_scroll_div_active = false;
static bool kb25_cpi_active = false;
static bool kb24_seen_layer3 = false;
static bool kb25_seen_layer6 = false;
static int16_t gesture_x    = 0;
static int16_t gesture_y    = 0;
static uint8_t current_scroll_div = DEFAULT_SCROLL_DIV;
static uint8_t current_cpi = DEFAULT_CPI;

static void reset_gesture_amount(void) {
    gesture_x = 0;
    gesture_y = 0;
}

static void set_scroll_div_once(uint8_t div) {
    if (current_scroll_div != div) {
        keyball_set_scroll_div(div);
        current_scroll_div = div;
    }
}

static void set_cpi_once(uint8_t cpi) {
    if (current_cpi != cpi) {
        keyball_set_cpi(cpi);
        current_cpi = cpi;
    }
}

// ジェスチャー中だけスクロールスナップを解除する。
// 通常時は keyboard_post_init_user() と同じく縦スクロール固定に戻す。
static void gesture_scrollsnap_begin(void) {
    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_FREE);
}

static void gesture_scrollsnap_end(void) {
    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_VERTICAL);
}

// アクティブウィンドウを最大化する。
// PowerToys Run のショートカットを変更する前提で Alt+Space -> X を使う。
static void send_window_maximize(void) {
    tap_code16(A(KC_SPC));
    wait_ms(80);
    tap_code(KC_X);
}

// アクティブウィンドウを最小化する。
// PowerToys Run のショートカットを変更する前提で Alt+Space -> N を使う。
static void send_window_minimize(void) {
    tap_code16(A(KC_SPC));
    wait_ms(80);
    tap_code(KC_N);
}

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
        // トラックボール操作を Win 系ショートカットに変換する
        // レイヤー3のスクロールレイヤー中でも使用可能
        case QK_KB_21:
            gesture_mode_21 = record->event.pressed;
            if (gesture_mode_21) {
                gesture_scrollsnap_begin();
            } else {
                gesture_scrollsnap_end();
            }
            reset_gesture_amount();
            return false;

        // Remap の Kb 22
        // トラックボール操作を Alt+Tab 系ショートカットに変換する
        // レイヤー3のスクロールレイヤー中でも使用可能
        case QK_KB_22:
            gesture_mode_22 = record->event.pressed;
            if (gesture_mode_22) {
                gesture_scrollsnap_begin();
            } else {
                gesture_scrollsnap_end();
            }

            // Kb22 を離したら Alt を離して、選択中のアプリに確定する
            if (!gesture_mode_22 && alt_tab_active) {
                unregister_code(KC_LALT);
                alt_tab_active = false;
            }

            reset_gesture_amount();
            return false;

        // Remap の Kb 23
        // トラックボール操作をアクティブウィンドウ操作 Win+矢印 に変換する
        // 左右スナップ後だけ Snap Assist 候補選択モードに入る
        // レイヤー3のスクロールレイヤー中でも使用可能
        case QK_KB_23:
            gesture_mode_23 = record->event.pressed;
            if (gesture_mode_23) {
                gesture_scrollsnap_begin();
            } else {
                gesture_scrollsnap_end();

                // Kb23では候補選択を使わないため、離した時は状態だけクリアする
                snap_assist_mode = false;
            }
            reset_gesture_amount();
            return false;

        // Remap の Kb 24
        // 押下してからレイヤー3を一度離れるまで、スクロールDIVを9にする
        case QK_KB_24:
            if (record->event.pressed) {
                kb24_scroll_div_active = true;
                kb24_seen_layer3 = layer_state_is(3);
                set_scroll_div_once(KB24_SCROLL_DIV);
            }
            return false;

        // Remap の Kb 25
        // 押下してからレイヤー6を一度離れるまで、CPIを200下げる
        case QK_KB_25:
            if (record->event.pressed) {
                kb25_cpi_active = true;
                kb25_seen_layer6 = layer_state_is(6);
                set_cpi_once(KB25_CPI);
            }
            return false;

        // Remap の Kb 26
        // トラックボール操作を音量操作に変換する
        // レイヤー3のスクロールレイヤー中でも使用可能
        case QK_KB_26:
            gesture_mode_26 = record->event.pressed;
            if (gesture_mode_26) {
                gesture_scrollsnap_begin();
            } else {
                gesture_scrollsnap_end();
            }
            reset_gesture_amount();
            return false;

        // Remap の Kb 27
        // トラックボール操作を矢印キーに変換する
        // レイヤー3のスクロールレイヤー中でも使用可能
        case QK_KB_27:
            gesture_mode_27 = record->event.pressed;
            if (gesture_mode_27) {
                gesture_scrollsnap_begin();
            } else {
                gesture_scrollsnap_end();
            }
            reset_gesture_amount();
            return false;

        // Remap の Kb 28
        // トラックボール操作をブラウザのタブ操作に変換する
        // レイヤー3のスクロールレイヤー中でも使用可能
        case QK_KB_28:
            gesture_mode_28 = record->event.pressed;
            if (gesture_mode_28) {
                gesture_scrollsnap_begin();
            } else {
                gesture_scrollsnap_end();
            }
            reset_gesture_amount();
            return false;
    }

    return true;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // Kb24/Kb25 の一時変更を毎回監視する。
    // Kb24はレイヤー3中、DIV 9を再適用することでスクロール側の上書きを避ける。
    if (kb24_scroll_div_active) {
        if (layer_state_is(3)) {
            kb24_seen_layer3 = true;
            set_scroll_div_once(KB24_SCROLL_DIV);
        } else if (kb24_seen_layer3) {
            set_scroll_div_once(DEFAULT_SCROLL_DIV);
            kb24_scroll_div_active = false;
            kb24_seen_layer3 = false;
        }
    }

    if (kb25_cpi_active) {
        if (layer_state_is(6)) {
            kb25_seen_layer6 = true;
            set_cpi_once(KB25_CPI);
        } else if (kb25_seen_layer6) {
            set_cpi_once(DEFAULT_CPI);
            kb25_cpi_active = false;
            kb25_seen_layer6 = false;
        }
    }

    if (gesture_mode_21 || gesture_mode_22 || gesture_mode_23 || gesture_mode_26 || gesture_mode_27 || gesture_mode_28) {
        // 通常レイヤーでは x/y、スクロールレイヤーでは h/v に変換されるため、両方をジェスチャー量に加算する
        gesture_x += mouse_report.x;
        gesture_y += mouse_report.y;

        // スクロールレイヤー用: h/v は値が小さいため倍率を掛ける
        // ジェスチャーキー押下中はスクロールスナップを FREE にしているので、
        // 縦固定スクロール中でも横方向が捨てられず gesture_x に入る。
        // v は通常の y と上下が逆になるため、符号を反転する。
        gesture_x += mouse_report.h * 48;
        gesture_y -= mouse_report.v * 48;

        // Kb21/Kb22/Kb23 押下中はカーソル移動やスクロールを発生させない
        mouse_report.x = 0;
        mouse_report.y = 0;
        mouse_report.h = 0;
        mouse_report.v = 0;

        if (gesture_mode_21) {
            // 上: Win+Tab
            // 環境によって上下が逆に感じる場合は、"<" と ">" を入れ替えてください。
            if (gesture_y < -GESTURE_THRESHOLD) {
                tap_code16(G(KC_TAB));
                reset_gesture_amount();
            }

            // 下: デスクトップ表示
            if (gesture_y > GESTURE_THRESHOLD) {
                tap_code16(G(KC_D));
                reset_gesture_amount();
            }

            // 右: 仮想デスクトップ右
            if (gesture_x > GESTURE_THRESHOLD) {
                tap_code16(C(G(KC_RGHT)));
                reset_gesture_amount();
            }

            // 左: 仮想デスクトップ左
            if (gesture_x < -GESTURE_THRESHOLD) {
                tap_code16(C(G(KC_LEFT)));
                reset_gesture_amount();
            }
        }

        if (gesture_mode_22) {
            // 上: Alt+Tab 画面を開く
            if (gesture_y < -GESTURE_THRESHOLD && !alt_tab_active) {
                register_code(KC_LALT);
                tap_code(KC_TAB);
                alt_tab_active = true;
                reset_gesture_amount();
            }

            // 下: Alt+Tab中の選択アプリを閉じる
            if (gesture_y > GESTURE_THRESHOLD) {
                if (alt_tab_active) {
                    // Alt+Tab画面上ではAlt+F4が効かず選択だけになることがあるため、
                    // いったんAltを離して選択中ウィンドウをアクティブ化し、
                    // 少し待ってからAlt+F4を送る。
                    unregister_code(KC_LALT);
                    alt_tab_active = false;
                    wait_ms(120);
                    register_code(KC_LALT);
                    tap_code(KC_F4);
                    unregister_code(KC_LALT);
                } else {
                    register_code(KC_LALT);   // 通常時も確実にAlt+F4を送る
                    tap_code(KC_F4);
                    unregister_code(KC_LALT);
                }
                reset_gesture_amount();
            }

            // 右: 次のアプリへ
            if (gesture_x > GESTURE_THRESHOLD && alt_tab_active) {
                tap_code(KC_TAB);
                reset_gesture_amount();
            }

            // 左: 前のアプリへ
            if (gesture_x < -GESTURE_THRESHOLD && alt_tab_active) {
                tap_code16(S(KC_TAB));
                reset_gesture_amount();
            }
        }

        if (gesture_mode_23) {
            // 上: アクティブウィンドウを必ず最大化
            if (gesture_y < -GESTURE_THRESHOLD) {
                send_window_maximize();
                snap_assist_mode = false;
                reset_gesture_amount();
            }

            // 下: アクティブウィンドウを必ず最小化
            if (gesture_y > GESTURE_THRESHOLD) {
                send_window_minimize();
                snap_assist_mode = false;
                reset_gesture_amount();
            }

            // 右: アクティブウィンドウを右側へ寄せ、左側のウィンドウ選択をキャンセル
            if (gesture_x > GESTURE_THRESHOLD) {
                tap_code16(G(KC_RGHT));
                wait_ms(120);
                tap_code(KC_ESC);
                snap_assist_mode = false;
                reset_gesture_amount();
            }

            // 左: アクティブウィンドウを左側へ寄せ、右側のウィンドウ選択をキャンセル
            if (gesture_x < -GESTURE_THRESHOLD) {
                tap_code16(G(KC_LEFT));
                wait_ms(120);
                tap_code(KC_ESC);
                snap_assist_mode = false;
                reset_gesture_amount();
            }
        }

        if (gesture_mode_26) {
            // 上: 音量アップ
            if (gesture_y < -GESTURE_THRESHOLD) {
                tap_code(KC_VOLU);
                reset_gesture_amount();
            }

            // 下: 音量ダウン
            if (gesture_y > GESTURE_THRESHOLD) {
                tap_code(KC_VOLD);
                reset_gesture_amount();
            }

            // 右: ミュート切替
            if (gesture_x > GESTURE_THRESHOLD) {
                tap_code(KC_MUTE);
                reset_gesture_amount();
            }

            // 左: ミュート切替
            if (gesture_x < -GESTURE_THRESHOLD) {
                tap_code(KC_MUTE);
                reset_gesture_amount();
            }
        }

        if (gesture_mode_27) {
            // 上: ↑
            if (gesture_y < -GESTURE27_Y_THRESHOLD) {
                tap_code(KC_UP);
                reset_gesture_amount();
            }

            // 下: ↓
            if (gesture_y > GESTURE27_Y_THRESHOLD) {
                tap_code(KC_DOWN);
                reset_gesture_amount();
            }

            // 右: →
            if (gesture_x > GESTURE27_X_THRESHOLD) {
                tap_code(KC_RGHT);
                reset_gesture_amount();
            }

            // 左: ←
            if (gesture_x < -GESTURE27_X_THRESHOLD) {
                tap_code(KC_LEFT);
                reset_gesture_amount();
            }
        }

        if (gesture_mode_28) {
            // 上: 新規タブ Ctrl+T
            if (gesture_y < -GESTURE_THRESHOLD) {
                tap_code16(C(KC_T));
                reset_gesture_amount();
            }

            // 下: 現在のタブを閉じる Ctrl+W
            if (gesture_y > GESTURE_THRESHOLD) {
                tap_code16(C(KC_W));
                reset_gesture_amount();
            }

            // 右: 右のタブへ Ctrl+Tab
            if (gesture_x > GESTURE_THRESHOLD) {
                tap_code16(C(KC_TAB));
                reset_gesture_amount();
            }

            // 左: 左のタブへ Ctrl+Shift+Tab
            if (gesture_x < -GESTURE_THRESHOLD) {
                tap_code16(C(S(KC_TAB)));
                reset_gesture_amount();
            }
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

