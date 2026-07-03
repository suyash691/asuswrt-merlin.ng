/*
 * stubs_xt8v2.c - Weak stub implementations for closed-source symbols
 * missing from the gnuton/asuswrt-merlin.ng prebuilt set.
 *
 * These functions are called by XT8_V2 code paths but their
 * implementations were never committed to the fork. Weak stubs allow
 * the firmware to link and boot; the actual functionality (CLED
 * control, ACS channel weight, AMAS hash bundle, fronthaul DWB)
 * will be non-functional until proper prebuilts are obtained from
 * ASUS GPL source.
 *
 * __attribute__((weak)) ensures these are overridden by real
 * implementations from prebuilt .o files when present.
 */
#include <stdio.h>

/* BCM CLED (controllable LED) - single-color LED management */
__attribute__((weak)) void bcm_cled_ctrl(int led, int mode) { }
__attribute__((weak)) void bcm_cled_ctrl_single_white(int led, int mode) { }
__attribute__((weak)) void _bcm_cled_ctrl(int led, int mode) { }
__attribute__((weak)) void rc_bcm_cled_ctrl(int led, int mode) { }

/* ACS (Auto Channel Selection) channel weight */
__attribute__((weak)) void acs_set_chwt(int val) { }

/* AMAS hash bundle key - mesh security */
__attribute__((weak)) int amas_gen_hash_bundle_key(char *key) { return -1; }
__attribute__((weak)) int amas_get_default_hash_bundle_key(char *key) { return -1; }
__attribute__((weak)) int amas_verify_hash_bundle_key(const char *key) { return -1; }
__attribute__((weak)) int amas_gen_default_backhaul_security(void) { return -1; }
__attribute__((weak)) int amas_verify_default_backhaul_security(void) { return -1; }

/* Fronthaul DWB (Dedicated Wireless Backhaul) profile */
__attribute__((weak)) int fronthaul_DWB_profile_generated(int unit, int subunit) { return 1; }

/* MTD crash log export */
__attribute__((weak)) int mtd_export_crashlog(void) { return 0; }

/* CFE MAC sync */
__attribute__((weak)) void sync_cfe_mac(void) { }

/* UU model check */
__attribute__((weak)) int uu_model_check(void) { return 0; }

/* WAN PHY LED pinmux */
__attribute__((weak)) void wan_phy_led_pinmux(void) { }
