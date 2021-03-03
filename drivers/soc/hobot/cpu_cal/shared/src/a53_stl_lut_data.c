//------------------------------------------------------------------------------
//  The confidential and proprietary information contained in this file may
//  only be used by a person authorised under and to the extent permitted
//  by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//         (C) COPYRIGHT 2018-2019 ARM Limited or its affiliates.
//             ALL RIGHTS RESERVED
//
//  This entire notice must be reproduced on all copies of this file
//  and copies of this file may only be made by a person if such person is
//  permitted to do so under the terms of a subsisting license agreement
//  from ARM Limited or its affiliates.
//
//  Release Information : Cortex-A53_STL-r0p0-00eac0
//
//------------------------------------------------------------------------------
//===========================================================================================
//   About: About the File
//      Declaration of LUT data vectors
//
//   About: Supported Configurations
//      All configurations
//
//   About: Assumption of Use
//      All global assumptions of use apply
//      Local assumptions of use: NONE
//
//   About: TEST_ID
//      N.A.
//
//===========================================================================================//


//#include <stdint.h>

#include "../inc/a53_stl_lut_data.h"
// DATA_SET_00_SDIV is for SDIV
const uint64_t DATA_SET_00_SDIV[DATA_SET_00_SDIV_DIM] = {
    0xAAAAAAAAAAAAAAAAu,  0x0000000000000002u, 0xD555555555555555u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000003u, 0xE38E38E38E38E38Eu
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000004u, 0xEAAAAAAAAAAAAAABu
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000005u, 0xEEEEEEEEEEEEEEEFu
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000006u, 0xF1C71C71C71C71C7u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000007u, 0xF3CF3CF3CF3CF3D0u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000008u, 0xF555555555555556u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000009u, 0xF684BDA12F684BDAu
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000000Au, 0xF777777777777778u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000000Bu, 0xF83E0F83E0F83E10u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000000Cu, 0xF8E38E38E38E38E4u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000000Du, 0xF96F96F96F96F970u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000000Eu, 0xF9E79E79E79E79E8u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000000Fu, 0xFA4FA4FA4FA4FA50u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000015u, 0xFBEFBEFBEFBEFBF0u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000002Au, 0xFDF7DF7DF7DF7DF8u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000035u, 0xFE63D2EB11B5EFE7u
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000004Au, 0xFED8CAF477ED8CB0u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000055u, 0xFEFEFEFEFEFEFEFFu
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000006Au, 0xFF31E97588DAF7F4u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000075u, 0xFF4549A9EFF4549Bu
    , 0xAAAAAAAAAAAAAAAAu, 0x000000000000008Au, 0xFF61B352DC22A0C6u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000095u, 0xFF6D63140B744270u
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000000AAu, 0xFF7F7F7F7F7F7F80u
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000000B5u, 0xFF874EBBA39847AAu
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000000CAu, 0xFF93DAD3389B7571u
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000000D5u, 0xFF9970936E2C11A1u
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000000EAu, 0xFFA2A4D4F7FA2A4Eu
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000000F5u, 0xFFA6D5DB148CB683u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000155u, 0xFFBFEFFBFEFFBFF0u
    , 0xAAAAAAAAAAAAAAAAu, 0x00000000000002AAu, 0xFFDFF7FDFF7FDFF8u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000355u, 0xFFE663D6C8ADAAF8u
};

const uint64_t DATA_SET_00_END = 0x0000000000000300u;

// DATA_SET_01_FADD Look Up Table
const uint64_t DATA_SET_01_FADD[DATA_SET_01_FADD_DIM] = {
    0x4444444444444444u,  0xBBBBBBBBBBBBBBBBu, 0x4444444444444444u
    , 0x3333333333333333u, 0xCCCCCCCCCCCCCCCCu, 0xCCCCCCCCCCCCCCCCu
    , 0xDDDDDDDDDDDDDDDDu, 0x2222222222222222u, 0xDDDDDDDDDDDDDDDDu
    , 0x6666666666666666u, 0x9999999999999999u, 0x6666666666666666u
    , 0x0000000087AAAAAAu, 0x0000000096AAAAAAu, 0x000000011E555554u
    , 0x00000000782AAAAAu, 0x00000000692AAAAAu, 0x00000000E1555554u
    , 0x000000001EAAAAAAu, 0x000000002DAAAAAAu, 0x000000004C555554u
    , 0x00000000E12AAAAAu, 0x00000000D22AAAAAu, 0x00000001B3555554u
    , 0x000000002AFFFFFFu, 0x000000002A800001u, 0x0000000055800000u
    , 0x00000000E67FFFFFu, 0x00000000E6000001u, 0x00000001CC800000u
    , 0x000000002A800001u, 0x000000002AFFFFFFu, 0x0000000055800000u
    , 0x00000000E6000001u, 0x00000000E67FFFFFu, 0x00000001CC800000u
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu
    , 0xAAAAAAAAAAAAAAAAu, 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu
    , 0x5555555555555555u, 0x0000000000000000u, 0x5555555555555555u
    , 0x5555555555555555u, 0x0000000000000000u, 0x5555555555555555u
    , 0x5555555555555555u, 0x0000000000000000u, 0x5555555555555555u
    , 0x5555555555555555u, 0x0000000000000000u, 0x5555555555555555u
    , 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu, 0xAAAAAAAAAAAAAAAAu
    , 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu, 0xAAAAAAAAAAAAAAAAu
    , 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu, 0xAAAAAAAAAAAAAAAAu
    , 0x0000000000000000u, 0xAAAAAAAAAAAAAAAAu, 0xAAAAAAAAAAAAAAAAu
    , 0x0000000000000000u, 0x5555555555555555u, 0x5555555555555555u
    , 0x0000000000000000u, 0x5555555555555555u, 0x5555555555555555u
    , 0x0000000000000000u, 0x5555555555555555u, 0x5555555555555555u
    , 0x0000000000000000u, 0x5555555555555555u, 0x5555555555555555u
    // negative number + negative number (comparable numbers)
    , 0x85A80404C9011163u, 0x85A28303C82C016Fu, 0x85B5438448968969u
    // positive number + positive number (comparable numbers)
    , 0x7D60C122D4C04B50u, 0x7D62C940D4464A97u, 0x7D71C531D4834AF4u
    // maximum positive normalized number + maximum positive normalized number
    , 0x7FEFFFFFFFFFFFFFu, 0x7FEFFFFFFFFFFFFFu, 0x7FF0000000000000u
    // NaN + positive number
    , 0xFFFFFFFFFFFFFFFFu, 0x4095A48086DD907Bu, 0xFFFFFFFFFFFFFFFFu
    // NaN + negative number
    , 0xFFFFFFFFFFFFFFFFu, 0x8994815154280A24u, 0xFFFFFFFFFFFFFFFFu
    // -0.0 + (-0.0)
    , 0x8000000000000000u, 0x8000000000000000u, 0x8000000000000000u
    // 0.0 + 0.0
    , 0x0000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    // 0.0 + (-0.0)
    , 0x0000000000000000u, 0x8000000000000000u, 0x0000000000000000u
    // minimum positive normalized number + minimum positive normalized number
    , 0x0010000000000000u, 0x0010000000000000u, 0x0020000000000000u
    // maximum positive normalized number + minimum positive normalized number
    , 0x7FEFFFFFFFFFFFFFu, 0x0010000000000000u, 0x7FEFFFFFFFFFFFFFu
    // minimum positive denormalized number
    //  + minimum positive denormalized number
    , 0x0000000000000001u, 0x0000000000000001u, 0x0000000000000002u
    // + infinity + (+ infinity)
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0x7FF0000000000000u
    // + infinity + (- infinity)
    , 0x7FF0000000000000u, 0xFFF0000000000000u, 0x7FF8000000000000u
    // - infinity + (- infinity)
    , 0xFFF0000000000000u, 0xFFF0000000000000u, 0xFFF0000000000000u
    // + infinity + NaN
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    // - infinity + NaN
    , 0xFFF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
};

const uint64_t DATA_SET_01_END = 0x0000000000000420u;

// DATA_SET_02_FDIV Look Up Table
const uint64_t DATA_SET_02_FDIV[DATA_SET_02_FDIV_DIM] = {
    0x09E170A3D70A3D70u,  0xC00EADCC548D20DDu, 0x89C230E5B0877E61u
    , 0x0D11C28F5C28F5C2u, 0xBFCE6A1710253B77u, 0x8D32AF959ED72D16u
    , 0x0FE2147AE147AE14u, 0xBFFE28C75CE35B15u, 0x8FD32EF829EB6426u
    , 0x1132666666666666u, 0xC23DE9BD37A8A2BBu, 0x8EE3AF0855B9D5A8u
    , 0x3333333333333333u, 0x3FF0000000000000u, 0x3333333333333333u
    , 0x3333333333333333u, 0x3FF0000000000000u, 0x3333333333333333u
    , 0x3333333333333333u, 0x3FF0000000000000u, 0x3333333333333333u
    , 0x3333333333333333u, 0x3FF0000000000000u, 0x3333333333333333u
    , 0xCCCCCCCCCCCCCCCCu, 0x3FF0000000000000u, 0xCCCCCCCCCCCCCCCCu
    , 0xCCCCCCCCCCCCCCCCu, 0x3FF0000000000000u, 0xCCCCCCCCCCCCCCCCu
    , 0xCCCCCCCCCCCCCCCCu, 0x3FF0000000000000u, 0xCCCCCCCCCCCCCCCCu
    , 0xCCCCCCCCCCCCCCCCu, 0x3FF0000000000000u, 0xCCCCCCCCCCCCCCCCu
};

const uint64_t DATA_SET_02_END = 0x0000000000000120u;

// DATA_SET_03_FMUL Look Up Table
const uint64_t DATA_SET_03_FMUL[DATA_SET_03_FMUL_DIM] = {
    0x005028F5C28F5C28u,  0xC09FD7720F353D9Au, 0x8100147AE147AFBFu
    , 0x03207AE147AE147Au, 0xC0DF88B2F392A7E3u, 0x84103D70A3D70C38u
    , 0x0720CCCCCCCCCCCCu, 0xBEBF3CF3CF3CF748u, 0x85F0666666666838u
    , 0x08711EB851EB851Eu, 0xBF7EF40991F1A6D4u, 0x88008F5C28F5C37Eu
    , 0x2222222222222222u, 0x3FF0000000000000u, 0x2222222222222222u
    , 0x2222222222222222u, 0x3FF0000000000000u, 0x2222222222222222u
    , 0x2222222222222222u, 0x3FF0000000000000u, 0x2222222222222222u
    , 0x2222222222222222u, 0x3FF0000000000000u, 0x2222222222222222u
    , 0xDDDDDDDDDDDDDDDDu, 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu
    , 0xDDDDDDDDDDDDDDDDu, 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu
    , 0xDDDDDDDDDDDDDDDDu, 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu
    , 0xDDDDDDDDDDDDDDDDu, 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu
    , 0x3FF0000000000000u, 0x2222222222222222u, 0x2222222222222222u
    , 0x3FF0000000000000u, 0x2222222222222222u, 0x2222222222222222u
    , 0x3FF0000000000000u, 0x2222222222222222u, 0x2222222222222222u
    , 0x3FF0000000000000u, 0x2222222222222222u, 0x2222222222222222u
    , 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu, 0xDDDDDDDDDDDDDDDDu
    , 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu, 0xDDDDDDDDDDDDDDDDu
    , 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu, 0xDDDDDDDDDDDDDDDDu
    , 0x3FF0000000000000u, 0xDDDDDDDDDDDDDDDDu, 0xDDDDDDDDDDDDDDDDu
};

const uint64_t DATA_SET_03_END = 0x00000000000001E0u;

// DATA_SET_04_FADD_s Look Up Table
const uint64_t DATA_SET_04_FADD[DATA_SET_04_FADD_DIM] = {
    0x4444444444444444u,  0xBBBBBBBBBBBBBBBBu, 0x00000000444443E6u
    , 0x3333333333333333u, 0xCCCCCCCCCCCCCCCCu, 0x00000000CCCCCCCCu
    , 0xDDDDDDDDDDDDDDDDu, 0x2222222222222222u, 0x00000000DDDDDDDDu
    , 0x6666666666666666u, 0x9999999999999999u, 0x0000000066666666u
    , 0x0000000087AAAAAAu, 0x0000000096AAAAAAu, 0x0000000096AAAAAAu
    , 0x00000000782AAAAAu, 0x00000000692AAAAAu, 0x00000000782AAAAAu
    , 0x000000001EAAAAAAu, 0x000000002DAAAAAAu, 0x000000002DAAAAAAu
    , 0x00000000E12AAAAAu, 0x00000000D22AAAAAu, 0x00000000E12AAAAAu
    , 0x000000002AFFFFFFu, 0x000000002A800001u, 0x000000002B400000u
    , 0x00000000E67FFFFFu, 0x00000000E6000001u, 0x00000000E6C00000u
    , 0x000000002A800001u, 0x000000002AFFFFFFu, 0x000000002B400000u
    , 0x00000000E6000001u, 0x00000000E67FFFFFu, 0x00000000E6C00000u
    , 0x00000000AAAAAAAAu, 0x0000000000000000u, 0x00000000AAAAAAAAu
    , 0x00000000AAAAAAAAu, 0x0000000000000000u, 0x00000000AAAAAAAAu
    , 0x00000000AAAAAAAAu, 0x0000000000000000u, 0x00000000AAAAAAAAu
    , 0x00000000AAAAAAAAu, 0x0000000000000000u, 0x00000000AAAAAAAAu
    , 0x0000000055555555u, 0x0000000000000000u, 0x0000000055555555u
    , 0x0000000055555555u, 0x0000000000000000u, 0x0000000055555555u
    , 0x0000000055555555u, 0x0000000000000000u, 0x0000000055555555u
    , 0x0000000055555555u, 0x0000000000000000u, 0x0000000055555555u
    , 0x0000000000000000u, 0x00000000AAAAAAAAu, 0x00000000AAAAAAAAu
    , 0x0000000000000000u, 0x00000000AAAAAAAAu, 0x00000000AAAAAAAAu
    , 0x0000000000000000u, 0x00000000AAAAAAAAu, 0x00000000AAAAAAAAu
    , 0x0000000000000000u, 0x00000000AAAAAAAAu, 0x00000000AAAAAAAAu
    , 0x0000000000000000u, 0x0000000055555555u, 0x0000000055555555u
    , 0x0000000000000000u, 0x0000000055555555u, 0x0000000055555555u
    , 0x0000000000000000u, 0x0000000055555555u, 0x0000000055555555u
    , 0x0000000000000000u, 0x0000000055555555u, 0x0000000055555555u
};

const uint64_t DATA_SET_04_END = 0x00000000000002A0u;

// DATA_SET_05_FMUL Look Up Table
const uint64_t DATA_SET_05_FMUL[DATA_SET_05_FMUL_DIM] = {
    0x005028F5C28F5C28u,  0xC09FD7720F353D9Au, 0x00000000924AFD4Fu
    , 0x03207AE147AE147Au, 0xC0DF88B2F392A7E3u, 0x00000000FBC773AFu
    , 0x0720CCCCCCCCCCCCu, 0xBEBF3CF3CF3CF748u, 0x000000005C972C39u
    , 0x08711EB851EB851Eu, 0xBF7EF40991F1A6D4u, 0x00000000A45E51CDu
    , 0x0000000022222222u, 0x000000003F800000u, 0x0000000022222222u
    , 0x0000000022222222u, 0x000000003F800000u, 0x0000000022222222u
    , 0x0000000022222222u, 0x000000003F800000u, 0x0000000022222222u
    , 0x0000000022222222u, 0x000000003F800000u, 0x0000000022222222u
    , 0x00000000DDDDDDDDu, 0x000000003F800000u, 0x00000000DDDDDDDDu
    , 0x00000000DDDDDDDDu, 0x000000003F800000u, 0x00000000DDDDDDDDu
    , 0x00000000DDDDDDDDu, 0x000000003F800000u, 0x00000000DDDDDDDDu
    , 0x00000000DDDDDDDDu, 0x000000003F800000u, 0x00000000DDDDDDDDu
    , 0x000000003F800000u, 0x0000000022222222u, 0x0000000022222222u
    , 0x000000003F800000u, 0x0000000022222222u, 0x0000000022222222u
    , 0x000000003F800000u, 0x0000000022222222u, 0x0000000022222222u
    , 0x000000003F800000u, 0x0000000022222222u, 0x0000000022222222u
    , 0x000000003F800000u, 0x00000000DDDDDDDDu, 0x00000000DDDDDDDDu
    , 0x000000003F800000u, 0x00000000DDDDDDDDu, 0x00000000DDDDDDDDu
    , 0x000000003F800000u, 0x00000000DDDDDDDDu, 0x00000000DDDDDDDDu
    , 0x000000003F800000u, 0x00000000DDDDDDDDu, 0x00000000DDDDDDDDu
};

const uint64_t DATA_SET_05_END = 0x00000000000001E0u;

// DATA_SET_06_FDIV Look Up Table
const uint64_t DATA_SET_06_FDIV[DATA_SET_06_FDIV_DIM] = {
    0x09E170A3D70A3D70u,  0xC00EADCC548D20DDu, 0x00000000C1FAC2B8u
    , 0x0D11C28F5C28F5C2u, 0xBFCE6A1710253B77u, 0x000000007F800000u
    , 0x0FE2147AE147AE14u, 0xBFFE28C75CE35B15u, 0x00000000C3E0D65Eu
    , 0x1132666666666666u, 0xC23DE9BD37A8A2BBu, 0x000000006E2EE193u
    , 0x0000000033333333u, 0x000000003F800000u, 0x0000000033333333u
    , 0x0000000033333333u, 0x000000003F800000u, 0x0000000033333333u
    , 0x0000000033333333u, 0x000000003F800000u, 0x0000000033333333u
    , 0x0000000033333333u, 0x000000003F800000u, 0x0000000033333333u
    , 0x00000000CCCCCCCCu, 0x000000003F800000u, 0x00000000CCCCCCCCu
    , 0x00000000CCCCCCCCu, 0x000000003F800000u, 0x00000000CCCCCCCCu
    , 0x00000000CCCCCCCCu, 0x000000003F800000u, 0x00000000CCCCCCCCu
    , 0x00000000CCCCCCCCu, 0x000000003F800000u, 0x00000000CCCCCCCCu
};

const uint64_t DATA_SET_06_END = 0x0000000000000120u;

// DATA_SET_08_FMADD Look Up Table
const uint64_t DATA_SET_08_FMADD[DATA_SET_08_FMADD_DIM] = {
    0x1111111111111111u,  0xCCCCCCCCCCCCCCCCu, 0x3333333333333333u
    , 0x3333333333333333u, 0xCCCCCCCCCCCCCCCCu, 0x1111111111111111u
    , 0xEEEEEEEEEEEEEEEEu, 0xEEEEEEEEEEEEEEEEu, 0x0000000DDDDDDDDDu
    , 0x3FF0000000000000u, 0x0000000666666666u, 0x0000001444444443u
    , 0x0000000222222222u, 0x3FF0000000000000u, 0x0000000999999999u
    , 0x0000000BBBBBBBBBu, 0xA5A5A5A5A5A5A5A5u, 0x3FF0000000000000u
    , 0x0000000000000000u, 0xA5A5A5A5A5A5A5A5u, 0xA5A5A5A5A5A5A5A5u
    , 0x3FF0000000000000u, 0x0000000000000000u, 0xA5A5A5A5A5A5A5A5u
    , 0x3C3C3C3C3C3C3C3Cu, 0x3FF0000000000000u, 0x0000000000000000u
    , 0x3C3C3C3C3C3C3C3Cu, 0x3C3C3C3C3C3C3C3Cu, 0x3FF0000000000000u
    , 0x0000000000000000u, 0x3C3C3C3C3C3C3C3Cu, 0x5A5A5A5A5A5A5A5Au
    , 0x3FF0000000000000u, 0x0000000000000000u, 0x5A5A5A5A5A5A5A5Au
    , 0x5A5A5A5A5A5A5A5Au, 0x3FF0000000000000u, 0x0000000000000000u
    , 0x5A5A5A5A5A5A5A5Au, 0xC3C3C3C3C3C3C3C3u, 0x3FF0000000000000u
    , 0x0000000000000000u, 0xC3C3C3C3C3C3C3C3u, 0xC3C3C3C3C3C3C3C3u
    , 0x3FF0000000000000u, 0x0000000000000000u, 0xC3C3C3C3C3C3C3C3u
    , 0x3FF0000000000000u, 0xA5A5A5A5A5A5A5A5u, 0x0000000000000000u
    , 0xA5A5A5A5A5A5A5A5u, 0x3FF0000000000000u, 0xA5A5A5A5A5A5A5A5u
    , 0x0000000000000000u, 0xA5A5A5A5A5A5A5A5u, 0x3FF0000000000000u
    , 0x3C3C3C3C3C3C3C3Cu, 0x0000000000000000u, 0x3C3C3C3C3C3C3C3Cu
    , 0x3FF0000000000000u, 0x3C3C3C3C3C3C3C3Cu, 0x0000000000000000u
    , 0x3C3C3C3C3C3C3C3Cu, 0x3FF0000000000000u, 0x5A5A5A5A5A5A5A5Au
    , 0x0000000000000000u, 0x5A5A5A5A5A5A5A5Au, 0x3FF0000000000000u
    , 0x5A5A5A5A5A5A5A5Au, 0x0000000000000000u, 0x5A5A5A5A5A5A5A5Au
    , 0x3FF0000000000000u, 0xC3C3C3C3C3C3C3C3u, 0x0000000000000000u
    , 0xC3C3C3C3C3C3C3C3u, 0x3FF0000000000000u, 0xC3C3C3C3C3C3C3C3u
    , 0x0000000000000000u, 0xC3C3C3C3C3C3C3C3u
};

const uint64_t DATA_SET_08_END = 0x0000000000000280u;

// DATA_SET_09_FMULX_V Look Up Table
const uint64_t DATA_SET_09_FMULX_V[DATA_SET_09_FMULX_VECT_DIM] = {
    0x3FCBFC0A1CDE8077u, 0x3FA4D9B3822F98C7u, 0x3F823BE87250EF7Du
    , 0xC1C3558F0AB53B63u, 0xC18355E8479407C6u, 0x43575D6913B8C024u
    , 0x4269D3C309302604u, 0x426A469309C14806u, 0x44E535045EC2B898u
    , 0xC2025B2109C1451Eu, 0xC20097489654AC4Bu, 0x441308B058197AD3u
    , 0x00084B1D4A298A8Au, 0x4152FDC61FEB7887u, 0x0163B016C952F1E6u
    , 0x4093120C745BF485u, 0x0002002128A12922u, 0x00831348A19322AAu
    , 0x00032265EAC9BD32u, 0x000A211627064289u, 0x0000000000000000u
    , 0xFFFFFFFFFFFFFFFFu, 0x4095A48086DD907Bu, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0x8994815154280A24u, 0xFFFFFFFFFFFFFFFFu
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0x7FF0000000000000u
    , 0xFFF0000000000000u, 0xFFF0000000000000u, 0x7FF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0xFFF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x8000000000000000u, 0x8000000000000000u, 0x0000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    , 0x7FEFFFFFFFFFFFFFu, 0x0010000000000000u, 0x400FFFFFFFFFFFFFu
};

const uint64_t DATA_SET_09_END = 0x0000000000000180u;

// DATA_SET_10_FDIV_V Look Up Table
const uint64_t DATA_SET_10_FDIV_V[DATA_SET_10_FDIV_VECT_DIM] = {
    0x3FCBFC0A1CDE8077u, 0x3FA4D9B3822F98C7u, 0x4015797AE3859BB5u
    , 0xC1C3558F0AB53B63u, 0xC18355E8479407C6u, 0x402FFF6C502F8AABu
    , 0x4269D3C309302604u, 0xC20097489654AC4Bu, 0xC058E8421A2A83C3u
    , 0x426A469309C14806u, 0xC2025B2109C1451Eu, 0xC056E73978E77371u
    , 0x00084B1D4A298A8Au, 0x4152FDC61FEB7887u, 0x000000001BF2D15Au
    , 0x4093120C745BF485u, 0x0002002128A12922u, 0x7FF0000000000000u
    , 0x00032265EAC9BD32u, 0x000A211627064289u, 0x3FD3CDD2C82AF2A5u
    , 0xFFFFFFFFFFFFFFFFu, 0x4095A48086DD907Bu, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0x8994815154280A24u, 0xFFFFFFFFFFFFFFFFu
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0x7FF8000000000000u
    , 0xFFF0000000000000u, 0xFFF0000000000000u, 0x7FF8000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0xFFF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x41BD0E701DDFE077u, 0x8000000000000000u, 0xFFF0000000000000u
    , 0xC1973C4BA9F1682Fu, 0x0000000000000000u, 0xFFF0000000000000u
    , 0x7FEFFFFFFFFFFFFFu, 0x0010000000000000u, 0x7FF0000000000000u
};

const uint64_t DATA_SET_10_END = 0x0000000000000180u;

// DATA_SET_11_FRSQRTE_V Look Up Table
const uint64_t DATA_SET_11_FRSQRTE[DATA_SET_11_FRSQRTE_VECT_DIM] = {
    0x3FCBFC0A1CDE8077u, 0x4001200000000000u
    , 0xC1C3558F0AB53B63u, 0x7FF8000000000000u
    , 0x00032265EAC9BD32u, 0x5FF2100000000000u
    , 0x80084B1D4A298A8Au, 0x7FF8000000000000u
    , 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x7FF0000000000000u, 0x0000000000000000u
    , 0xFFF0000000000000u, 0x7FF8000000000000u
    , 0x0000000000000000u, 0x7FF0000000000000u
};

const uint64_t DATA_SET_11_END = 0x0000000000000080u;

// DATA_SET_12_FADDP_V Look Up Table
const uint64_t DATA_SET_12_FADDP_V[DATA_SET_12_FADDP_VECT_DIM] = {
    0x3FCBFC0A1CDE8077u, 0x3FA4D9B3822F98C7u, 0x3FB4D9B3822F98C7u
    , 0x3FDBFC0A1CDE8077u, 0xC1C3558F0AB53B63u, 0xC18355E8479407C6u
    , 0xC19355E8479407C6u, 0xC1D3558F0AB53B63u, 0x4269D3C309302604u
    , 0xC20097489654AC4Bu, 0xC21097489654AC4Bu, 0x4279D3C309302604u
    , 0x00084B1D4A298A8Au, 0x4152FDC61FEB7887u, 0x4162FDC61FEB7887u
    , 0x0010963A94531514u, 0x4093120C745BF485u, 0x0002002128A12922u
    , 0x0004004251425244u, 0x40A3120C745BF485u, 0x00032265EAC9BD32u
    , 0x000A211627064289u, 0x0014422C4E0C8512u, 0x000644CBD5937A64u
    , 0x7FEFFFFFFFFFFFFFu, 0x7FEFFFFFFFFFFFFFu, 0x7FF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0x4095A48086DD907Bu
    , 0x40A5A48086DD907Bu, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x8994815154280A24u, 0x89A4815154280A24u, 0xFFFFFFFFFFFFFFFFu
    , 0x8000000000000000u, 0x8000000000000000u, 0x8000000000000000u
    , 0x8000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x8000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x8000000000000000u
    , 0x0010000000000000u, 0x0010000000000000u, 0x0020000000000000u
    , 0x0020000000000000u, 0x7FF0000000000000u, 0x0010000000000000u
    , 0x0020000000000000u, 0x7FF0000000000000u, 0x0000000000000001u
    , 0x0000000000000001u, 0x0000000000000002u, 0x0000000000000002u
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0x7FF0000000000000u
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0xFFF0000000000000u
    , 0xFFF0000000000000u, 0x7FF0000000000000u, 0xFFF0000000000000u
    , 0xFFF0000000000000u, 0xFFF0000000000000u, 0xFFF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x7FF0000000000000u, 0xFFF0000000000000u, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0xFFF0000000000000u
};

const uint64_t DATA_SET_12_END = 0x0000000000000280u;

// DATA_SET_13_FMADD_S Look Up Table
const uint32_t DATA_SET_13_FMADD_S[DATA_SET_13_FMADD_S_DIM] = {
    0x4C2F0341u, 0x4CBAA032u, 0x4C397ED0u
    , 0x597F2BC3u, 0xBF610531u, 0xBF7CC752u
    , 0x439AC416u, 0x439B332Eu, 0x7DA94A49u
    , 0x7DC8FADCu, 0x7473AC82u, 0x7F800000u
    , 0x00339E16u, 0x49BA9734u, 0x00347DC9u
    , 0x0A167D69u, 0x80082E16u, 0x8065DC63u
    , 0x806971CBu, 0x806971CBu, 0x7F800000u
    , 0x3794AC45u, 0x397BEA17u, 0x7F800000u
    , 0x9318BA10u, 0xFF800000u, 0x7319C1D5u
    , 0x7F800000u, 0x7FC00000u, 0x473E956Bu
    , 0x4769C2A1u, 0x7FC00000u, 0x00800000u
    , 0x7FC00000u, 0x439741DEu, 0x7FC00000u
    , 0x7F7FFFFFu, 0x9718546Au, 0x972C2106u
    , 0xD7185469u, 0x00000000u, 0x80000000u
    , 0x4A6BC337u, 0x4A6BC337u, 0x80000000u
    , 0x00000000u, 0xB97A9704u, 0xB97A9704u
};

const uint64_t DATA_SET_13_END = 0x0000000000000180u;

// DATA_SET_14_FMSUB Look Up Table
const uint64_t DATA_SET_14_FMSUB[DATA_SET_14_FMSUB_DIM] = {
    0x3FCBFC0A1CDE8077u, 0x3FA4D9B3822F98C7u, 0x3FB4D9B3822F98C7u
    , 0x3FB2923673E57AD7u, 0xC1C3558F0AB53B63u, 0xC18355E8479407C6u
    , 0xC19355E8479407C6u, 0xC3575D6914EE1EA9u, 0x4269D3C309302604u
    , 0xC20097489654AC4Bu, 0xC21097489654AC4Bu, 0x447AC7F6B56E35BAu
    , 0x00084B1D4A298A8Au, 0x4152FDC61FEB7887u, 0x4162FDC61FEB7887u
    , 0x4162FDC61FEB7887u, 0x4093120C745BF485u, 0x0002002128A12922u
    , 0x0004004251425244u, 0x80830B481CF09E06u, 0x00032265EAC9BD32u
    , 0x000A211627064289u, 0x0014422C4E0C8512u, 0x0014422C4E0C8512u
    , 0x7FEFFFFFFFFFFFFFu, 0x7FEFFFFFFFFFFFFFu, 0x7FF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0x4095A48086DD907Bu
    , 0x40A5A48086DD907Bu, 0x7FFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x8994815154280A24u, 0x89A4815154280A24u, 0x7FFFFFFFFFFFFFFFu
    , 0x8000000000000000u, 0x8000000000000000u, 0x8000000000000000u
    , 0x8000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x8000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    , 0x0010000000000000u, 0x0010000000000000u, 0x0020000000000000u
    , 0x0020000000000000u, 0x7FF0000000000000u, 0x0010000000000000u
    , 0x0020000000000000u, 0xFFF0000000000000u, 0x0000000000000001u
    , 0x0000000000000001u, 0x0000000000000002u, 0x0000000000000002u
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0x7FF0000000000000u
    , 0x7FF8000000000000u, 0x7FF0000000000000u, 0xFFF0000000000000u
    , 0xFFF0000000000000u, 0x7FF8000000000000u, 0xFFF0000000000000u
    , 0xFFF0000000000000u, 0xFFF0000000000000u, 0xFFF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0xFFF0000000000000u, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
};

const uint64_t DATA_SET_14_END = 0x0000000000000280u;

// DATA_SET_15_FMLA_V Look Up Table
const uint64_t DATA_SET_15_FMLA_V[DATA_SET_15_FMLA_VECT_DIM] = {
    0x3FCBFC0A1CDE8077u, 0x3FA4D9B3822F98C7u, 0x3FB4D9B3822F98C7u
    , 0x3FB2923673E57AD7u, 0xC1C3558F0AB53B63u, 0xC18355E8479407C6u
    , 0xC19355E84BC51BF9u, 0xC3575D6914EE1EA9u, 0x4269D3C309302604u
    , 0xC20097489654AC4Bu, 0xC21097416E0B6FD7u, 0x447AC7F6B56E35BAu
    , 0x00084B1D4A298A8Au, 0x4162FDC61FEB7887u, 0x4162FDC61FEB7887u
    , 0x4162FDC61FEB7887u, 0x4093120C745BF485u, 0x0002002128A12922u
    , 0x00831B492635A74Eu, 0x000400425142521Du, 0x00032265EAC9BD32u
    , 0x000A211627064289u, 0x0014422C4E0C8512u, 0x0014422C4E0C8512u
    , 0x7FEFFFFFFFFFFFFFu, 0x7FEFFFFFFFFFFFFFu, 0x7FF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0x4095A48086DD907Bu
    , 0x7FFFFFFFFFFFFFFFu, 0x7FFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0x8994815154280A24u, 0x7FFFFFFFFFFFFFFFu, 0x7FFFFFFFFFFFFFFFu
    , 0x8000000000000000u, 0x8000000000000000u, 0x0000000000000000u
    , 0x8000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x8000000000000000u
    , 0x0000000000000000u, 0x0000000000000000u, 0x0000000000000000u
    , 0x0010000000000000u, 0x0010000000000000u, 0x0020000000000000u
    , 0x0020000000000000u, 0x7FF0000000000000u, 0x0010000000000000u
    , 0x7FF8000000000000u, 0x7FF8000000000000u, 0x0000000000000001u
    , 0x0000000000000001u, 0x0000000000000002u, 0x0000000000000002u
    , 0x7FF0000000000000u, 0x7FF0000000000000u, 0x7FF8000000000000u
    , 0x7FF8000000000000u, 0x7FF0000000000000u, 0xFFF0000000000000u
    , 0x7FF8000000000000u, 0x7FF8000000000000u, 0xFFF0000000000000u
    , 0xFFF0000000000000u, 0x7FF8000000000000u, 0xFFF0000000000000u
    , 0x7FF0000000000000u, 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0xFFF0000000000000u, 0xFFFFFFFFFFFFFFFFu
    , 0xFFFFFFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu
};

const uint64_t DATA_SET_15_END = 0x0000000000000280u;