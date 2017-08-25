/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-constants.m2c,v 1.5 2005/07/15 22:41:16 rstory Exp $
 *
 * $Id: //BBN_Linux/Branch/Branch_for_Rel_SDK_CUCTC_General_20151029/tclinux_phoenix/apps/public/net-snmp-5.3.1/agent/mibgroup/tcp-mib/tcpConnectionTable/tcpConnectionTable_constants.h#1 $
 */
#ifndef TCPCONNECTIONTABLE_CONSTANTS_H
#define TCPCONNECTIONTABLE_CONSTANTS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table tcpConnectionTable 
     */
#define TCPCONNECTIONTABLE_OID              1,3,6,1,2,1,6,19

#define COLUMN_TCPCONNECTIONLOCALADDRESSTYPE         1

#define COLUMN_TCPCONNECTIONLOCALADDRESS         2

#define COLUMN_TCPCONNECTIONLOCALPORT         3

#define COLUMN_TCPCONNECTIONREMADDRESSTYPE         4

#define COLUMN_TCPCONNECTIONREMADDRESS         5

#define COLUMN_TCPCONNECTIONREMPORT         6

#define COLUMN_TCPCONNECTIONSTATE         7
#define COLUMN_TCPCONNECTIONSTATE_FLAG    (0x1 << 6)

#define COLUMN_TCPCONNECTIONPROCESS         8


#define TCPCONNECTIONTABLE_MIN_COL   COLUMN_TCPCONNECTIONSTATE
#define TCPCONNECTIONTABLE_MAX_COL   COLUMN_TCPCONNECTIONPROCESS


    /*
     * TODO:405:r: Review TCPCONNECTIONTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define TCPCONNECTIONTABLE_SETTABLE_COLS (COLUMN_TCPCONNECTIONSTATE_FLAG)
    /*
     * NOTES on enums
     * ==============
     *
     * Value Mapping
     * -------------
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them
     * below. For example, a boolean flag (1/0) is usually represented
     * as a TruthValue in a MIB, which maps to the values (1/2).
     *
     */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table tcpConnectionTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * tcpConnectionLocalAddressType (InetAddressType / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef INETADDRESSTYPE_ENUMS
#define INETADDRESSTYPE_ENUMS

#define INETADDRESSTYPE_UNKNOWN  0
#define INETADDRESSTYPE_IPV4  1
#define INETADDRESSTYPE_IPV6  2
#define INETADDRESSTYPE_IPV4Z  3
#define INETADDRESSTYPE_IPV6Z  4
#define INETADDRESSTYPE_DNS  16

#endif                          /* INETADDRESSTYPE_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * tcpConnectionRemAddressType (InetAddressType / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef INETADDRESSTYPE_ENUMS
#define INETADDRESSTYPE_ENUMS

#define INETADDRESSTYPE_UNKNOWN  0
#define INETADDRESSTYPE_IPV4  1
#define INETADDRESSTYPE_IPV6  2
#define INETADDRESSTYPE_IPV4Z  3
#define INETADDRESSTYPE_IPV6Z  4
#define INETADDRESSTYPE_DNS  16

#endif                          /* INETADDRESSTYPE_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * tcpConnectionState (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef TCPCONNECTIONSTATE_ENUMS
#define TCPCONNECTIONSTATE_ENUMS

#define TCPCONNECTIONSTATE_CLOSED  1
#define TCPCONNECTIONSTATE_LISTEN  2
#define TCPCONNECTIONSTATE_SYNSENT  3
#define TCPCONNECTIONSTATE_SYNRECEIVED  4
#define TCPCONNECTIONSTATE_ESTABLISHED  5
#define TCPCONNECTIONSTATE_FINWAIT1  6
#define TCPCONNECTIONSTATE_FINWAIT2  7
#define TCPCONNECTIONSTATE_CLOSEWAIT  8
#define TCPCONNECTIONSTATE_LASTACK  9
#define TCPCONNECTIONSTATE_CLOSING  10
#define TCPCONNECTIONSTATE_TIMEWAIT  11
#define TCPCONNECTIONSTATE_DELETETCB  12

#endif                          /* TCPCONNECTIONSTATE_ENUMS */




#ifdef __cplusplus
}
#endif
#endif                          /* TCPCONNECTIONTABLE_OIDS_H */