#include "display.h"
#include "ergohaven.h"
#include "src/display/eh_display.h"

void housekeeping_task_user(void) {
    display_housekeeping_task();
}

void keyboard_post_init_user(void) {
    display_init_kb();
}

const char *default_layer_label(uint8_t layer) {
    static const char *PROGMEM labels[] = {
        "BASE",  "LOWER",  "RAISE",  "ADJST",
        "FOUR",  "FIVE",   "SIX",    "SEVEN",
        "EIGHT", "NINE",   "TEN",    "ELEVN",
        "TWLVE", "CLAUDE", "1C",     "SHCHERB",
    };
    return labels[layer];
}
