# OS key mapping node module [![Build Status](https://travis-ci.org/alexandrudima/vscode-keyboard.svg?branch=master)](https://travis-ci.org/alexandrudima/vscode-keyboard)
Returns what characters are produced by pressing keys with different modifiers on the current system keyboard layout.

# Please note the new repository location: https://github.com/Microsoft/node-native-keymap

## Installing

```sh
npm install native-keymap
```

## Using

```javascript
var keymap = require('native-keymap');
console.log(keymap.getKeyMap());
```

Example output when using standard US keyboard layout:
```
[
  ...
  { key_code: 'VKEY_OEM_2',
    value: '/',
    withShift: '?',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_3',
    value: '`',
    withShift: '~',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_4',
    value: '[',
    withShift: '{',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_5',
    value: '\\',
    withShift: '|',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_6',
    value: ']',
    withShift: '}',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_7',
    value: '\'',
    withShift: '"',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_102',
    value: '\\',
    withShift: '|',
    withAltGr: '',
    withShiftAltGr: '' } ]
```

Example output when using German (Swiss) keyboard layout:
```
[
  ...
  { key_code: 'VKEY_OEM_2',
    value: '§',
    withShift: '°',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_3',
    value: '',
    withShift: '¨!',
    withAltGr: ']',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_4',
    value: '\'',
    withShift: '?',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_5',
    value: '´ä',
    withShift: 'à',
    withAltGr: '{',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_6',
    value: '',
    withShift: '^`',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_7',
    value: '~ö',
    withShift: 'é',
    withAltGr: '',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_8',
    value: '$',
    withShift: '£',
    withAltGr: '}',
    withShiftAltGr: '' },
  { key_code: 'VKEY_OEM_102',
    value: '<',
    withShift: '>',
    withAltGr: '\\',
    withShiftAltGr: '' } ]
```

## Supported OSes
 * linux (X11)
 * windows
 * mac

## Developing
 * only tested on `node v4.1.1`
 * on linux: `sudo apt-get install libx11-dev`
 * `npm install -g node-gyp`
 * `node-gyp configure`
 * `node-gyp build`
 * `npm test`

## License
[MIT](https://github.com/alexandrudima/vscode-keyboard/blob/master/License.txt)

