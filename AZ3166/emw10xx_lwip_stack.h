/* LWIP implementation of NetworkInterfaceAPI
 * Copyright (c) 2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef EMW10xx_LWIP_STACK_H
#define EMW10xx_LWIP_STACK_H

#include "nsapi.h"

#ifdef __cplusplus
extern "C" {
#endif

nsapi_error_t mbed_lwip_init(void);

nsapi_error_t mbed_lwip_bringup(void);

extern nsapi_stack_t lwip_stack;


#ifdef __cplusplus
}
#endif

#endif
