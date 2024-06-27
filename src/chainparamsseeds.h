#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the dash network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    // 0x01,0x04,0xd1,0x91,0x32,0xa5,0x27,0x0f,
    // 0x01,0x04,0x6d,0xc7,0x76,0x2f,0x27,0x0f,
};

static const uint8_t chainparams_seed_test[] = {
    // 0x01,0x04,0x2b,0xe5,0x4d,0x2e,0x4e,0x1f,
    // 0x01,0x04,0x2d,0x4d,0xa7,0xf7,0x4e,0x1f,
    // 0x01,0x04,0xb2,0x3e,0xcb,0xf9,0x4e,0x1f,
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
