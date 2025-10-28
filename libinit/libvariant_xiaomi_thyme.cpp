/*
 * Copyright (C) 2021-2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libvariant.h>

static const variant_info thyme_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "thyme",
    .marketname = "Mi 10S",
    .model = "M2102J2SC",
    .build_fingerprint = "Xiaomi/thyme/thyme:13/TKQ1.221114.001/V816.0.4.0.TGACNXM:user/release-keys",
    .nfc = true,
};

const std::vector<variant_info> variants = {
    thyme_info,
};
