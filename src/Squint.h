const uint8_t Squint6RBitmaps[] PROGMEM = {
    0x00,                          // ' '
    0xF4,                          // '!'
    0xB6, 0x80,                    // '""'
    0x57, 0xD5, 0xF5, 0x00,        // '#'
    0x27, 0xC3, 0xE4,              // '$'
    0xA5, 0x4A,                    // '%'
    0x78, 0x5A, 0xD0,              // '&'
    0xE0,                          // '''
    0x6A, 0x90,                    // '('
    0x95, 0x60,                    // ')'
    0x25, 0x5C, 0xA8, 0x80,        // '*'
    0x21, 0x3E, 0x42, 0x00,        // '+'
    0x58,                          // ','
    0xF8,                          // '-'
    0x80,                          // '.'
    0x25, 0x29, 0x00,              // '/'
    0x57, 0xD4,                    // '0'
    0x59, 0x2E,                    // '1'
    0xC4, 0xAE,                    // '2'
    0xE5, 0x1E,                    // '3'
    0x36, 0xF2,                    // '4'
    0xF3, 0x9C,                    // '5'
    0x53, 0xD4,                    // '6'
    0xE5, 0x24,                    // '7'
    0xF5, 0x5E,                    // '8'
    0x57, 0x94,                    // '9'
    0xA0,                          // ':'
    0x45, 0x80,                    // ';'
    0x2A, 0x22,                    // '<'
    0xF0, 0xF0,                    // '='
    0x88, 0xA8,                    // '>'
    0xC4, 0xA0, 0x80,              // '?'
    0x69, 0xB8, 0x60,              // '@'
    0x23, 0x95, 0xF8, 0x80,        // 'A'
    0xE9, 0xE9, 0xF0,              // 'B'
    0x79, 0x88, 0x70,              // 'C'
    0xE9, 0x99, 0xE0,              // 'D'
    0xF3, 0x4E,                    // 'E'
    0xF3, 0x48,                    // 'F'
    0x68, 0xB9, 0x60,              // 'G'
    0x99, 0xF9, 0x90,              // 'H'
    0xE9, 0x2E,                    // 'I'
    0xE4, 0xDC,                    // 'J'
    0xBA, 0xCA, 0xB0,              // 'K'
    0x88, 0x88, 0xF0,              // 'L'
    0x8E, 0xEB, 0x58, 0x80,        // 'M'
    0x9D, 0xB9, 0x90,              // 'N'
    0x69, 0x99, 0x60,              // 'O'
    0xE9, 0x9E, 0x80,              // 'P'
    0x69, 0x9A, 0x70,              // 'Q'
    0xE9, 0x9E, 0xB0,              // 'R'
    0x78, 0xF1, 0xE0,              // 'S'
    0xE9, 0x24,                    // 'T'
    0x99, 0x99, 0x70,              // 'U'
    0x8C, 0x54, 0xE2, 0x00,        // 'V'
    0x8C, 0x6B, 0xB8, 0x80,        // 'W'
    0x99, 0x69, 0x90,              // 'X'
    0x99, 0x62, 0x20,              // 'Y'
    0xF2, 0x48, 0xF0,              // 'Z'
    0xEA, 0xB0,                    // '['
    0x91, 0x22, 0x40,              // '\'
    0xD5, 0x70,                    // ']'
    0x22, 0xA2,                    // '^'
    0xFC,                          // '_'
    0xA4,                          // '`'
    0x79, 0xB5,                    // 'a'
    0x8A, 0xD9, 0xE0,              // 'b'
    0x72, 0x30,                    // 'c'
    0x17, 0x9B, 0x50,              // 'd'
    0x6B, 0xC6,                    // 'e'
    0x56, 0x68,                    // 'f'
    0x79, 0x71, 0x60,              // 'g'
    0x8E, 0x99, 0x90,              // 'h'
    0xB8,                          // 'i'
    0x4D, 0x60,                    // 'j'
    0x92, 0xEA,                    // 'k'
    0xAA, 0x40,                    // 'l'
    0xF5, 0x6B, 0x10,              // 'm'
    0xE9, 0x99,                    // 'n'
    0x69, 0x96,                    // 'o'
    0xE9, 0xDA, 0x80,              // 'p'
    0x79, 0xB5, 0x10,              // 'q'
    0xBA, 0x40,                    // 'r'
    0x7C, 0x3E,                    // 's'
    0x9E, 0x46,                    // 't'
    0x99, 0xB5,                    // 'u'
    0x8E, 0xDC, 0x40,              // 'v'
    0x8D, 0x6A, 0xE0,              // 'w'
    0xD9, 0x09, 0xB0,              // 'x'
    0x99, 0x71, 0x60,              // 'y'
    0xF2, 0x4F,                    // 'z'
    0x6B, 0x64, 0xC0,              // '{'
    0xFC,                          // '|'
    0xC9, 0xB5, 0x80,              // '}'
    0x5A,                          // '~'
};

const GFXglyph Squint6RGlyphs[] PROGMEM = {
    {   0, 1, 1, 3, 0,  0 }, // ' '
    {   1, 1, 6, 2, 0, -5 }, // '!'
    {   2, 3, 3, 4, 0, -5 }, // '""'
    {   4, 5, 5, 6, 0, -5 }, // '#'
    {   8, 4, 6, 5, 0, -5 }, // '$'
    {  11, 3, 5, 4, 0, -5 }, // '%'
    {  13, 4, 5, 5, 0, -5 }, // '&'
    {  16, 1, 3, 2, 0, -5 }, // '''
    {  17, 2, 6, 3, 0, -5 }, // '('
    {  19, 2, 6, 3, 0, -5 }, // ')'
    {  21, 5, 5, 6, 0, -5 }, // '*'
    {  25, 5, 5, 6, 0, -5 }, // '+'
    {  29, 2, 3, 3, 0, -2 }, // ','
    {  30, 5, 1, 6, 0, -3 }, // '-'
    {  31, 1, 1, 2, 0, -1 }, // '.'
    {  32, 3, 6, 4, 0, -5 }, // '/'
    {  35, 3, 5, 4, 0, -5 }, // '0'
    {  37, 3, 5, 4, 0, -5 }, // '1'
    {  39, 3, 5, 4, 0, -5 }, // '2'
    {  41, 3, 5, 4, 0, -5 }, // '3'
    {  43, 3, 5, 4, 0, -5 }, // '4'
    {  45, 3, 5, 4, 0, -5 }, // '5'
    {  47, 3, 5, 4, 0, -5 }, // '6'
    {  49, 3, 5, 4, 0, -5 }, // '7'
    {  51, 3, 5, 4, 0, -5 }, // '8'
    {  53, 3, 5, 4, 0, -5 }, // '9'
    {  55, 1, 3, 2, 0, -4 }, // ':'
    {  56, 2, 5, 3, 0, -4 }, // ';'
    {  58, 3, 5, 4, 0, -5 }, // '<'
    {  60, 4, 3, 5, 0, -4 }, // '='
    {  62, 3, 5, 4, 0, -5 }, // '>'
    {  64, 3, 6, 4, 0, -5 }, // '?'
    {  67, 4, 5, 5, 0, -5 }, // '@'
    {  70, 5, 5, 6, 0, -5 }, // 'A'
    {  74, 4, 5, 5, 0, -5 }, // 'B'
    {  77, 4, 5, 5, 0, -5 }, // 'C'
    {  80, 4, 5, 5, 0, -5 }, // 'D'
    {  83, 3, 5, 4, 0, -5 }, // 'E'
    {  85, 3, 5, 4, 0, -5 }, // 'F'
    {  87, 4, 5, 5, 0, -5 }, // 'G'
    {  90, 4, 5, 5, 0, -5 }, // 'H'
    {  93, 3, 5, 4, 0, -5 }, // 'I'
    {  95, 3, 5, 4, 0, -5 }, // 'J'
    {  97, 4, 5, 5, 0, -5 }, // 'K'
    { 100, 4, 5, 5, 0, -5 }, // 'L'
    { 103, 5, 5, 6, 0, -5 }, // 'M'
    { 107, 4, 5, 5, 0, -5 }, // 'N'
    { 110, 4, 5, 5, 0, -5 }, // 'O'
    { 113, 4, 5, 5, 0, -5 }, // 'P'
    { 116, 4, 5, 5, 0, -5 }, // 'Q'
    { 119, 4, 5, 5, 0, -5 }, // 'R'
    { 122, 4, 5, 5, 0, -5 }, // 'S'
    { 125, 3, 5, 4, 0, -5 }, // 'T'
    { 127, 4, 5, 5, 0, -5 }, // 'U'
    { 130, 5, 5, 6, 0, -5 }, // 'V'
    { 134, 5, 5, 6, 0, -5 }, // 'W'
    { 138, 4, 5, 5, 0, -5 }, // 'X'
    { 141, 4, 5, 5, 0, -5 }, // 'Y'
    { 144, 4, 5, 5, 0, -5 }, // 'Z'
    { 147, 2, 6, 3, 0, -5 }, // '['
    { 149, 3, 6, 4, 0, -5 }, // '\'
    { 152, 2, 6, 3, 0, -5 }, // ']'
    { 154, 5, 3, 6, 0, -5 }, // '^'
    { 156, 6, 1, 7, 0, 0 }, // '_'
    { 157, 2, 3, 3, 0, -5 }, // '`'
    { 158, 4, 4, 5, 0, -4 }, // 'a'
    { 160, 4, 5, 5, 0, -5 }, // 'b'
    { 163, 3, 4, 4, 0, -4 }, // 'c'
    { 165, 4, 5, 5, 0, -5 }, // 'd'
    { 168, 4, 4, 5, 0, -4 }, // 'e'
    { 170, 3, 5, 4, 0, -5 }, // 'f'
    { 172, 4, 5, 5, 0, -4 }, // 'g'
    { 175, 4, 5, 5, 0, -5 }, // 'h'
    { 178, 1, 5, 2, 0, -5 }, // 'i'
    { 179, 2, 6, 3, 0, -5 }, // 'j'
    { 181, 3, 5, 4, 0, -5 }, // 'k'
    { 183, 2, 5, 3, 0, -5 }, // 'l'
    { 185, 5, 4, 6, 0, -4 }, // 'm'
    { 188, 4, 4, 5, 0, -4 }, // 'n'
    { 190, 4, 4, 5, 0, -4 }, // 'o'
    { 192, 4, 5, 5, 0, -4 }, // 'p'
    { 195, 4, 5, 5, 0, -4 }, // 'q'
    { 198, 3, 4, 4, 0, -4 }, // 'r'
    { 200, 4, 4, 5, 0, -4 }, // 's'
    { 202, 3, 5, 4, 0, -5 }, // 't'
    { 204, 4, 4, 5, 0, -4 }, // 'u'
    { 206, 5, 4, 6, 0, -4 }, // 'v'
    { 209, 5, 4, 6, 0, -4 }, // 'w'
    { 212, 5, 4, 6, 0, -4 }, // 'x'
    { 215, 4, 5, 5, 0, -4 }, // 'y'
    { 218, 4, 4, 5, 0, -4 }, // 'z'
    { 220, 3, 6, 4, 0, -5 }, // '{'
    { 223, 1, 6, 2, 0, -5 }, // '|'
    { 224, 3, 6, 4, 0, -5 }, // '}'
    { 227, 4, 2, 5, 0, -3 }, // '~'
};

const uint8_t Squint6BBitmaps[] PROGMEM = {
    0x00,                          // ' '
    0xFF, 0x30,                    // '!'
    0xDE, 0xD4,                    // '""'
    0x6D, 0xFD, 0xB7, 0xF6, 0xC0,  // '#'
    0x23, 0xF8, 0x7F, 0x10,        // '$'
    0xDA, 0x63, 0x19, 0x6C,        // '%'
    0x76, 0x1B, 0x6D, 0x80,        // '&'
    0xF8,                          // '''
    0x7B, 0x6C, 0xC0,              // '('
    0xCD, 0xB7, 0x80,              // ')'
    0x32, 0xD7, 0xB3, 0x84,        // '*'
    0x30, 0xCF, 0xCC, 0x30,        // '+'
    0xF8,                          // ','
    0xFC,                          // '-'
    0xF0,                          // '.'
    0x33, 0x66, 0xCC,              // '/'
    0x76, 0xFF, 0xB7, 0x00,        // '0'
    0x6E, 0x66, 0xF0,              // '1'
    0xE3, 0x3C, 0xF0,              // '2'
    0xF3, 0x63, 0xF0,              // '3'
    0x1A, 0xF7, 0xF1, 0x80,        // '4'
    0xFC, 0xF3, 0xE0,              // '5'
    0x76, 0x3F, 0xB7, 0x00,        // '6'
    0xF3, 0x6C, 0xC0,              // '7'
    0xFE, 0xDD, 0xBF, 0x80,        // '8'
    0x76, 0xFE, 0x37, 0x00,        // '9'
    0xF3, 0xC0,                    // ':'
    0xF3, 0xE0,                    // ';'
    0x36, 0xC6, 0x30,              // '<'
    0xF8, 0x3E,                    // '='
    0xC6, 0x36, 0xC0,              // '>'
    0xE3, 0x36, 0x06,              // '?'
    0x7B, 0x3D, 0xF0, 0x78,        // '@'
    0x23, 0xB7, 0xFD, 0x80,        // 'A'
    0xF6, 0xFD, 0xBF, 0x80,        // 'B'
    0x7D, 0xCC, 0x70,              // 'C'
    0xF6, 0xF7, 0xBF, 0x00,        // 'D'
    0xFC, 0xEC, 0xF0,              // 'E'
    0xFC, 0xEC, 0xC0,              // 'F'
    0x76, 0x37, 0xB7, 0x80,        // 'G'
    0xDE, 0xFF, 0xBD, 0x80,        // 'H'
    0xF6, 0x66, 0xF0,              // 'I'
    0xF3, 0x3B, 0xE0,              // 'J'
    0xDF, 0xB9, 0xAD, 0x80,        // 'K'
    0xCC, 0xCC, 0xF0,              // 'L'
    0xC7, 0xDF, 0xFE, 0xBC, 0x60,  // 'M'
    0xCF, 0xBF, 0xF7, 0xCC,        // 'N'
    0x76, 0xF7, 0xB7, 0x00,        // 'O'
    0xF6, 0xF7, 0xEC, 0x00,        // 'P'
    0x76, 0xF7, 0xA7, 0x80,        // 'Q'
    0xF6, 0xF7, 0xED, 0x80,        // 'R'
    0x7C, 0xF3, 0xE0,              // 'S'
    0xF6, 0x66, 0x60,              // 'T'
    0xDE, 0xF7, 0xB6, 0x80,        // 'U'
    0xDE, 0xF6, 0xE2, 0x00,        // 'V'
    0xC7, 0xAF, 0xFF, 0x7C, 0x60,  // 'W'
    0xDE, 0xDD, 0xBD, 0x80,        // 'X'
    0xDE, 0xDC, 0x63, 0x00,        // 'Y'
    0xF3, 0x6C, 0xF0,              // 'Z'
    0xFB, 0x6D, 0xC0,              // '['
    0xCC, 0x66, 0x33,              // '\'
    0xED, 0xB7, 0xC0,              // ']'
    0x31, 0xEC, 0xC0,              // '^'
    0xFC,                          // '_'
    0xF4,                          // '`'
    0x7E, 0xF6, 0xD0,              // 'a'
    0xC7, 0xB7, 0xBB, 0x00,        // 'b'
    0x7C, 0xC7,                    // 'c'
    0x1B, 0xF7, 0xB6, 0x80,        // 'd'
    0x76, 0xF8, 0xE0,              // 'e'
    0x7D, 0xCE, 0xC0,              // 'f'
    0x7E, 0xFE, 0x37, 0x00,        // 'g'
    0xC7, 0xB7, 0xBD, 0x80,        // 'h'
    0xCF, 0xC0,                    // 'i'
    0x63, 0xB7, 0x80,              // 'j'
    0xC6, 0x37, 0xED, 0x80,        // 'k'
    0xDB, 0x66,                    // 'l'
    0xFE, 0xDB, 0xDB, 0xC3,        // 'm'
    0xF6, 0xF7, 0xB0,              // 'n'
    0x76, 0xF6, 0xE0,              // 'o'
    0xB6, 0xF7, 0xEC, 0x00,        // 'p'
    0x6E, 0xF6, 0xF1, 0x80,        // 'q'
    0xDF, 0xB1, 0x80,              // 'r'
    0x7F, 0x0F, 0xE0,              // 's'
    0xDF, 0x66,                    // 't'
    0xDE, 0xF6, 0xD0,              // 'u'
    0xDE, 0xDC, 0x40,              // 'v'
    0xC3, 0xDB, 0xDB, 0x7E,        // 'w'
    0xDB, 0x9D, 0xB0,              // 'x'
    0xDE, 0xDE, 0x37, 0x00,        // 'y'
    0xF9, 0x99, 0xF0,              // 'z'
    0x76, 0xEE, 0x67,              // '{'
    0xFF, 0xF0,                    // '|'
    0xE6, 0x77, 0x6E,              // '}'
    0x6F, 0x60,                    // '~'
};

const GFXglyph Squint6BGlyphs[] PROGMEM = {
    {   0, 1, 1, 3, 0,  0 }, // ' '
    {   1, 2, 6, 3, 0, -5 }, // '!'
    {   3, 5, 3, 6, 0, -5 }, // '""'
    {   5, 7, 5, 8, 0, -5 }, // '#'
    {  10, 5, 6, 6, 0, -5 }, // '$'
    {  14, 6, 5, 7, 0, -5 }, // '%'
    {  18, 5, 5, 6, 0, -5 }, // '&'
    {  22, 2, 3, 3, 0, -5 }, // '''
    {  23, 3, 6, 4, 0, -5 }, // '('
    {  26, 3, 6, 4, 0, -5 }, // ')'
    {  29, 6, 5, 7, 0, -5 }, // '*'
    {  33, 6, 5, 7, 0, -5 }, // '+'
    {  37, 2, 3, 3, 0, -2 }, // ','
    {  38, 6, 1, 7, 0, -3 }, // '-'
    {  39, 2, 2, 3, 0, -2 }, // '.'
    {  40, 4, 6, 5, 0, -5 }, // '/'
    {  43, 5, 5, 6, 0, -5 }, // '0'
    {  47, 4, 5, 5, 0, -5 }, // '1'
    {  50, 4, 5, 5, 0, -5 }, // '2'
    {  53, 4, 5, 5, 0, -5 }, // '3'
    {  56, 5, 5, 6, 0, -5 }, // '4'
    {  60, 4, 5, 5, 0, -5 }, // '5'
    {  63, 5, 5, 6, 0, -5 }, // '6'
    {  67, 4, 5, 5, 0, -5 }, // '7'
    {  70, 5, 5, 6, 0, -5 }, // '8'
    {  74, 5, 5, 6, 0, -5 }, // '9'
    {  78, 2, 5, 3, 0, -5 }, // ':'
    {  80, 2, 6, 3, 0, -5 }, // ';'
    {  82, 4, 5, 5, 0, -5 }, // '<'
    {  85, 5, 3, 6, 0, -4 }, // '='
    {  87, 4, 5, 5, 0, -5 }, // '>'
    {  90, 4, 6, 5, 0, -5 }, // '?'
    {  93, 6, 5, 7, 0, -5 }, // '@'
    {  97, 5, 5, 6, 0, -5 }, // 'A'
    { 101, 5, 5, 6, 0, -5 }, // 'B'
    { 105, 4, 5, 5, 0, -5 }, // 'C'
    { 108, 5, 5, 6, 0, -5 }, // 'D'
    { 112, 4, 5, 5, 0, -5 }, // 'E'
    { 115, 4, 5, 5, 0, -5 }, // 'F'
    { 118, 5, 5, 6, 0, -5 }, // 'G'
    { 122, 5, 5, 6, 0, -5 }, // 'H'
    { 126, 4, 5, 5, 0, -5 }, // 'I'
    { 129, 4, 5, 5, 0, -5 }, // 'J'
    { 132, 5, 5, 6, 0, -5 }, // 'K'
    { 136, 4, 5, 5, 0, -5 }, // 'L'
    { 139, 7, 5, 8, 0, -5 }, // 'M'
    { 144, 6, 5, 7, 0, -5 }, // 'N'
    { 148, 5, 5, 6, 0, -5 }, // 'O'
    { 152, 5, 5, 6, 0, -5 }, // 'P'
    { 156, 5, 5, 6, 0, -5 }, // 'Q'
    { 160, 5, 5, 6, 0, -5 }, // 'R'
    { 164, 4, 5, 5, 0, -5 }, // 'S'
    { 167, 4, 5, 5, 0, -5 }, // 'T'
    { 170, 5, 5, 6, 0, -5 }, // 'U'
    { 174, 5, 5, 6, 0, -5 }, // 'V'
    { 178, 7, 5, 8, 0, -5 }, // 'W'
    { 183, 5, 5, 6, 0, -5 }, // 'X'
    { 187, 5, 5, 6, 0, -5 }, // 'Y'
    { 191, 4, 5, 5, 0, -5 }, // 'Z'
    { 194, 3, 6, 4, 0, -5 }, // '['
    { 197, 4, 6, 5, 0, -5 }, // '\'
    { 200, 3, 6, 4, 0, -5 }, // ']'
    { 203, 6, 3, 7, 0, -5 }, // '^'
    { 206, 6, 1, 7, 0, 0 }, // '_'
    { 207, 2, 3, 3, 0, -5 }, // '`'
    { 208, 5, 4, 6, 0, -4 }, // 'a'
    { 211, 5, 5, 6, 0, -5 }, // 'b'
    { 215, 4, 4, 5, 0, -4 }, // 'c'
    { 217, 5, 5, 6, 0, -5 }, // 'd'
    { 221, 5, 4, 6, 0, -4 }, // 'e'
    { 224, 4, 5, 5, 0, -5 }, // 'f'
    { 227, 5, 5, 6, 0, -4 }, // 'g'
    { 231, 5, 5, 6, 0, -5 }, // 'h'
    { 235, 2, 5, 3, 0, -5 }, // 'i'
    { 237, 3, 6, 4, 0, -5 }, // 'j'
    { 240, 5, 5, 6, 0, -5 }, // 'k'
    { 244, 3, 5, 4, 0, -5 }, // 'l'
    { 246, 8, 4, 9, 0, -4 }, // 'm'
    { 250, 5, 4, 6, 0, -4 }, // 'n'
    { 253, 5, 4, 6, 0, -4 }, // 'o'
    { 256, 5, 5, 6, 0, -4 }, // 'p'
    { 260, 5, 5, 6, 0, -4 }, // 'q'
    { 264, 5, 4, 6, 0, -4 }, // 'r'
    { 267, 5, 4, 6, 0, -4 }, // 's'
    { 270, 3, 5, 4, 0, -5 }, // 't'
    { 272, 5, 4, 6, 0, -4 }, // 'u'
    { 275, 5, 4, 6, 0, -4 }, // 'v'
    { 278, 8, 4, 9, 0, -4 }, // 'w'
    { 282, 5, 4, 6, 0, -4 }, // 'x'
    { 285, 5, 5, 6, 0, -4 }, // 'y'
    { 289, 5, 4, 6, 0, -4 }, // 'z'
    { 292, 4, 6, 5, 0, -5 }, // '{'
    { 295, 2, 6, 3, 0, -5 }, // '|'
    { 297, 4, 6, 5, 0, -5 }, // '}'
    { 300, 6, 2, 7, 0, -3 }, // '~'
};

const GFXfont Squint6R PROGMEM = {
  (uint8_t  *)Squint6RBitmaps,
  (GFXglyph *)Squint6RGlyphs,
  0x20, 0x7E, 8 };

const GFXfont Squint6B PROGMEM = {
  (uint8_t  *)Squint6BBitmaps,
  (GFXglyph *)Squint6BGlyphs,
  0x20, 0x7E, 8 };


