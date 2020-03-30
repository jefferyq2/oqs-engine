/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "oqse_err.h"

#ifndef OPENSSL_NO_ERR

static ERR_STRING_DATA OQSE_str_functs[] = {
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_BITS, 0), "oqse_asn1_bits"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_ITEM_SIGN, 0), "oqse_asn1_item_sign"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_ITEM_VERIFY, 0), "oqse_asn1_item_verify"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_PRIV_DECODE, 0), "oqse_asn1_priv_decode"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_PRIV_ENCODE, 0), "oqse_asn1_priv_encode"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_PUB_DECODE, 0), "oqse_asn1_pub_decode"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_PUB_ENCODE, 0), "oqse_asn1_pub_encode"},
    {ERR_PACK(0, OQSE_F_OQSE_ASN1_SECURITY_BITS, 0), "oqse_asn1_security_bits"},
    {ERR_PACK(0, OQSE_F_OQSE_BIND_HELPER, 0), "oqse_bind_helper"},
    {ERR_PACK(0, OQSE_F_OQSE_GET_SECURITY_BITS, 0), "oqse_get_security_bits"},
    {ERR_PACK(0, OQSE_F_OQSE_KEY_INIT, 0), "oqse_key_init"},
    {ERR_PACK(0, OQSE_F_OQSE_NID2OQS, 0), "oqse_nid2oqs"},
    {ERR_PACK(0, OQSE_F_OQSE_PKEY_AMETHS, 0), "oqse_pkey_ameths"},
    {ERR_PACK(0, OQSE_F_OQSE_PKEY_PMETHS, 0), "oqse_pkey_pmeths"},
    {ERR_PACK(0, OQSE_F_OQSE_PMETH_DIGESTSIGN, 0), "oqse_pmeth_digestsign"},
    {ERR_PACK(0, OQSE_F_OQSE_PMETH_DIGESTVERIFY, 0), "oqse_pmeth_digestverify"},
    {ERR_PACK(0, OQSE_F_OQSE_PMETH_KEYGEN, 0), "oqse_pmeth_keygen"},
    {ERR_PACK(0, OQSE_F_OQSE_PMETH_SIGN, 0), "oqse_pmeth_sign"},
    {ERR_PACK(0, OQSE_F_OQSE_PMETH_VERIFY, 0), "oqse_pmeth_verify"},
    {ERR_PACK(0, OQSE_F_OQSE_REGISTER_NID, 0), "oqse_register_nid"},
    {ERR_PACK(0, OQSE_F_OQSE_REGISTER_NIDS, 0), "oqse_register_nids"},
    {ERR_PACK(0, OQSE_F_OQSE_SIZE, 0), "oqse_size"},
    {0, NULL}
};

static ERR_STRING_DATA OQSE_str_reasons[] = {
    {ERR_PACK(0, 0, OQSE_R_ALREADY_REGISTERED), "already registered"},
    {ERR_PACK(0, 0, OQSE_R_BAD_INIT), "bad init"},
    {ERR_PACK(0, 0, OQSE_R_BAD_NID), "bad nid"},
    {ERR_PACK(0, 0, OQSE_R_CALLOC_FAILED), "calloc failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_AMETH_FAILED),
    "engine bind ameth failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_INIT_FAILED), "engine bind init failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_NAME_FAILED), "engine bind name failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_PMETH_FAILED),
    "engine bind pmeth failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_REGISTER_AMETH_FAILED),
    "engine bind register ameth failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_REGISTER_NIDS_FAILED),
    "engine bind register nids failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_REGISTER_PMETH_FAILED),
    "engine bind register pmeth failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_SET_DESTROY_FAILED),
    "engine bind set destroy failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_SET_FAILED), "engine bind set failed"},
    {ERR_PACK(0, 0, OQSE_R_ENGINE_BIND_SET_FINISH_FAILED),
    "engine bind set finish failed"},
    {ERR_PACK(0, 0, OQSE_R_FAILED_KEYGEN), "failed keygen"},
    {ERR_PACK(0, 0, OQSE_R_FATAL), "fatal"},
    {ERR_PACK(0, 0, OQSE_R_MALLOC_FAIL), "malloc fail"},
    {ERR_PACK(0, 0, OQSE_R_MALLOC_FAILED), "malloc failed"},
    {ERR_PACK(0, 0, OQSE_R_MALLOC_FAILURE), "malloc failure"},
    {ERR_PACK(0, 0, OQSE_R_NID_NOT_FOUND), "nid not found"},
    {ERR_PACK(0, 0, OQSE_R_NID_UNDEF), "nid undef"},
    {ERR_PACK(0, 0, OQSE_R_NO_ALGOR), "no algor"},
    {ERR_PACK(0, 0, OQSE_R_NO_ALG_DATA), "no alg data"},
    {ERR_PACK(0, 0, OQSE_R_NO_DATA), "no data"},
    {ERR_PACK(0, 0, OQSE_R_NO_KEY), "no key"},
    {ERR_PACK(0, 0, OQSE_R_OBJ_CREATE_FAILED), "obj create failed"},
    {ERR_PACK(0, 0, OQSE_R_OBJ_RETRIEVE_FAILED), "obj retrieve failed"},
    {ERR_PACK(0, 0, OQSE_R_QSE_NEW_FAILED), "qse new failed"},
    {ERR_PACK(0, 0, OQSE_R_SIGN_NEW_FAILED), "sign new failed"},
    {ERR_PACK(0, 0, OQSE_R_UNKNOWN_NIST_LEVEL), "unknown nist level"},
    {0, NULL}
};

#endif

static int lib_code = 0;
static int error_loaded = 0;

int ERR_load_OQSE_strings(void)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();

    if (!error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(lib_code, OQSE_str_functs);
        ERR_load_strings(lib_code, OQSE_str_reasons);
#endif
        error_loaded = 1;
    }
    return 1;
}

void ERR_unload_OQSE_strings(void)
{
    if (error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(lib_code, OQSE_str_functs);
        ERR_unload_strings(lib_code, OQSE_str_reasons);
#endif
        error_loaded = 0;
    }
}

void ERR_OQSE_error(int function, int reason, const char *file, int line)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();
    ERR_PUT_error(lib_code, function, reason, file, line);
}