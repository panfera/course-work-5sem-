unsigned char initcode_bin[] = {
  0xb8, 0x03, 0x00, 0xcd, 0x10, 0xe4, 0x92, 0x0c, 0x02, 0xe6, 0x92, 0x8c,
  0xc8, 0x8e, 0xd8, 0x8e, 0xc0, 0x66, 0xb8, 0xc6, 0x00, 0x00, 0x00, 0x66,
  0xa3, 0x79, 0x00, 0x66, 0x31, 0xc0, 0x8c, 0xd8, 0x66, 0xc1, 0xe0, 0x04,
  0x66, 0x05, 0x65, 0x01, 0x00, 0x00, 0x66, 0xa3, 0x5f, 0x01, 0x66, 0x31,
  0xc0, 0x8c, 0xd8, 0x66, 0xc1, 0xe0, 0x04, 0x05, 0x80, 0x00, 0x66, 0xa3,
  0xc2, 0x00, 0x66, 0x31, 0xc0, 0x8c, 0xc8, 0x66, 0xc1, 0xe0, 0x04, 0xa2,
  0x8a, 0x00, 0xa2, 0x92, 0x00, 0x66, 0xc1, 0xe8, 0x08, 0xa2, 0x8b, 0x00,
  0xa2, 0x93, 0x00, 0x88, 0x26, 0x8c, 0x00, 0x88, 0x26, 0x94, 0x00, 0x66,
  0x0f, 0x01, 0x16, 0xc0, 0x00, 0xfa, 0xe4, 0x70, 0x0c, 0x80, 0xe6, 0x70,
  0x0f, 0x20, 0xc0, 0x0c, 0x01, 0x0f, 0x22, 0xc0, 0x66, 0xff, 0x2e, 0x79,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x9a, 0xcf, 0x00,
  0xff, 0xff, 0x00, 0x00, 0x00, 0x92, 0xcf, 0x00, 0xff, 0xff, 0x00, 0x00,
  0x00, 0x9a, 0xcf, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x92, 0xcf, 0x00,
  0xff, 0xff, 0x00, 0x00, 0x0a, 0x92, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x98, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x20, 0x00,
  0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xb8, 0x10, 0x00, 0x8e, 0xd8,
  0x66, 0xb8, 0x20, 0x00, 0x8e, 0xc0, 0xbf, 0x00, 0x00, 0x20, 0x00, 0xb9,
  0x00, 0x60, 0x00, 0x00, 0x31, 0xc0, 0xf3, 0xab, 0xb8, 0x03, 0x10, 0x20,
  0x00, 0xbf, 0x00, 0x00, 0x20, 0x00, 0x26, 0x89, 0x07, 0xb8, 0x03, 0x20,
  0x20, 0x00, 0xbf, 0x00, 0x10, 0x20, 0x00, 0xb9, 0x04, 0x00, 0x00, 0x00,
  0x26, 0x89, 0x07, 0x05, 0x00, 0x10, 0x00, 0x00, 0x83, 0xc7, 0x08, 0xe2,
  0xf3, 0xb8, 0x83, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x20, 0x20, 0x00, 0xb9,
  0x04, 0x00, 0x00, 0x00, 0x89, 0xca, 0xb9, 0x00, 0x02, 0x00, 0x00, 0x26,
  0x89, 0x07, 0x05, 0x00, 0x00, 0x20, 0x00, 0x83, 0xc7, 0x08, 0xe2, 0xf3,
  0x89, 0xd1, 0xe2, 0xe8, 0x0f, 0x20, 0xe0, 0x0f, 0xba, 0xe8, 0x05, 0x0f,
  0x22, 0xe0, 0xb8, 0x00, 0x00, 0x20, 0x00, 0x0f, 0x22, 0xd8, 0xb9, 0x80,
  0x00, 0x00, 0xc0, 0x0f, 0x32, 0x0f, 0xba, 0xe8, 0x08, 0x0f, 0x30, 0x0f,
  0x20, 0xc0, 0x0f, 0xba, 0xe8, 0x1f, 0x0f, 0x22, 0xc0, 0xff, 0x2d, 0x5f,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x66, 0xb8, 0x38,
  0x00, 0x8e, 0xd8, 0x8e, 0xc0, 0x48, 0x31, 0xff, 0x48, 0x31, 0xf6, 0x66,
  0xb8, 0x28, 0x00, 0x8e, 0xe8, 0x66, 0xb9, 0xff, 0xff, 0xbf, 0x00, 0x00,
  0x00, 0x00, 0x65, 0x67, 0x66, 0xff, 0x07, 0x66, 0xff, 0xc7, 0xe2, 0xf6,
  0xeb, 0xeb
};
unsigned int initcode_bin_len = 398;