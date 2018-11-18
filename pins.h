#define _BV(b)      (1 << b)
#define sbi(p, b)   (p |= _BV(b))
#define cbi(p, b)   (p &= ~_BV(b))