/* ------------------------------------------
 * Copyright (c) 2019, Synopsys, Inc. All rights reserved.

 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:

 * 1) Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.

 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.

 * 3) Neither the name of the Synopsys, Inc., nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
--------------------------------------------- */
#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#define CORE_FREQ_MHZ   100
#define GYRO_DPS        1000    // +/-1000dps
#define ACCEL_G         4       // +/-4g

#define FRAME_SIZE              128

#define CHUNK_SIZE                  (9)                             // "chunk" is a 9 numbers set: filtered (ACC_body_x, ACC_body_y, ACC_body_z) + raw (ACCx, ACCy, ACCz, GYRx, GYRy, GYRz)
#define CHUNK_SIZE_BYTES            (CHUNK_SIZE * sizeof(float))    // "chunk" size in bytes 
#define OVERLAP_SIZE                (FRAME_SIZE / 2)                // overlap size in chunks
#define BUFFERING_DEPTH             (8)
#define INPUT_BUFFER_SIZE           (FRAME_SIZE * BUFFERING_DEPTH)
#define INPUT_BUFFER_THRESHOLD      (INPUT_BUFFER_SIZE - (FRAME_SIZE / 2))

#define ENABLE_DUMP     0

#endif //_SETTINGS_H_