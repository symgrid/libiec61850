/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_Unsigned32_H_
#define	_Unsigned32_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Unsigned32 */
typedef INTEGER_t	 Unsigned32_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Unsigned32;
asn_struct_free_f Unsigned32_free;
asn_struct_print_f Unsigned32_print;
asn_constr_check_f Unsigned32_constraint;
ber_type_decoder_f Unsigned32_decode_ber;
der_type_encoder_f Unsigned32_encode_der;
xer_type_decoder_f Unsigned32_decode_xer;
xer_type_encoder_f Unsigned32_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Unsigned32_H_ */
