#include "display.h"
#include "ergohaven.h"
#include "src/display/eh_display.h"

void housekeeping_task_user(void) {
    display_housekeeping_task();
}

void keyboard_post_init_user(void) {
    display_init_kb();
}

#include "src/eh_settings.h"

  uint32_t 
  get_lcd_timeout_ms(void) {
      return 6UL * 60 * 60 * 1000;     // 6 часов
  }

  uint8_t 
  get_lcd_timeout_mins(void) {
      return 255;   // на случай
  если где-то проверяется uint8_t
  }
