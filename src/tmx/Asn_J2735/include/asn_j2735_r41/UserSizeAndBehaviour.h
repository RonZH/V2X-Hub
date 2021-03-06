/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod_with_PSM.ASN"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#ifndef	_UserSizeAndBehaviour_H_
#define	_UserSizeAndBehaviour_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UserSizeAndBehaviour {
	UserSizeAndBehaviour_unavailable	= 0,
	UserSizeAndBehaviour_smallStature	= 1,
	UserSizeAndBehaviour_largeStature	= 2,
	UserSizeAndBehaviour_erraticMoving	= 3,
	UserSizeAndBehaviour_slowMoving	= 4
} e_UserSizeAndBehaviour;

/* UserSizeAndBehaviour */
typedef BIT_STRING_t	 UserSizeAndBehaviour_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UserSizeAndBehaviour;
asn_struct_free_f UserSizeAndBehaviour_free;
asn_struct_print_f UserSizeAndBehaviour_print;
asn_constr_check_f UserSizeAndBehaviour_constraint;
ber_type_decoder_f UserSizeAndBehaviour_decode_ber;
der_type_encoder_f UserSizeAndBehaviour_encode_der;
xer_type_decoder_f UserSizeAndBehaviour_decode_xer;
xer_type_encoder_f UserSizeAndBehaviour_encode_xer;
per_type_decoder_f UserSizeAndBehaviour_decode_uper;
per_type_encoder_f UserSizeAndBehaviour_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UserSizeAndBehaviour_H_ */
#include "asn_internal.h"
