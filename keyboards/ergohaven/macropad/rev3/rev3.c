  #include "display.h"
  #include "ergohaven.h"
  #include "src/display/eh_display.h"
  #include "src/eh_settings.h"

  void housekeeping_task_user(void) {
      display_housekeeping_task();
  }

  void keyboard_post_init_user(void) {
      display_init_kb();
  }

  uint32_t get_lcd_timeout_ms(void) {
      return 6UL * 60 * 60 * 1000;
  }

  uint8_t get_lcd_timeout_mins(void) {
      return 255;
  }
