# rules.mk esta en lenguaje makefile

# kb: crkbd

# km: neoncorne

OLED_DRIVER_ENABLE = yes

RGBLIGHT_ENABLE = yes

EXTRAKEY_ENABLE = yes
# necesario para ocupar los keycodes KC_MUTE, KC_VOLD y KC_VOLU

WPM_ENABLE = yes
# necesario para ocupar get_current_wpm()
# obtener el valor de words per minute

EXTRAFLAGS += -flto
# esta linea reduce considerable size al hex