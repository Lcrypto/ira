/*
scalar LDPC decoder configuration

Copyright 2019 Ahmet Inan <inan@aicodix.de>
*/

#pragma once

const int ITERATIONS_MAX = 25;
const int SOFT_MIN = -128;
const int SOFT_MAX = 127;
const int VMAG_MAX = 127;
const int CMAG_MAX = 31;
const int COUNT_MIN = 2;
const int COUNT_MAX = 27;
const int BLOCK_SCALARS = 360;
const int CODE_SCALARS = 16200;
const int TOTAL_LINKS_MAX = 75239;
const int SCALAR_LOCATIONS_MAX = TOTAL_LINKS_MAX+1;
const int CODE_BLOCKS = CODE_SCALARS / BLOCK_SCALARS;
const int SCALAR_PARITIES_MAX = (CODE_SCALARS * 4) / 5;
const int BLOCK_PARITIES_MAX = SCALAR_PARITIES_MAX / BLOCK_SCALARS;
const int BLOCK_LOCATIONS_MAX = (TOTAL_LINKS_MAX+1) / BLOCK_SCALARS;

