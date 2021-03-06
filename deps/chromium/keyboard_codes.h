// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_KEYCODES_KEYBOARD_CODES_H_
#define UI_EVENTS_KEYCODES_KEYBOARD_CODES_H_

#ifdef _WIN32
#include "keyboard_codes_win.h"
#else
#include "keyboard_codes_posix.h"
#endif

// Specifies modifier keys as stated in
// third_party/WebKit/Source/WebCore/inspector/Inspector.json.
// Notice: |kNumLockKeyModifierMask| is for usage in the key_converter.cc
//         and keycode_text_conversion_x.cc only, not for inspector.
enum KeyModifierMask {
  kAltKeyModifierMask = 1 << 0,
  kControlKeyModifierMask = 1 << 1,
  kMetaKeyModifierMask = 1 << 2,
  kShiftKeyModifierMask = 1 << 3,
  kNumLockKeyModifierMask = 1 << 4
};

#endif  // UI_EVENTS_KEYCODES_KEYBOARD_CODES_H_