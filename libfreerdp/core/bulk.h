/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Bulk Compression
 *
 * Copyright 2014 Marc-Andre Moreau <marcandre.moreau@gmail.com>
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

#ifndef FREERDP_CORE_BULK_H
#define FREERDP_CORE_BULK_H

typedef struct rdp_bulk rdpBulk;

#include "rdp.h"

#include <freerdp/codec/mppc.h>
#include <freerdp/codec/mppc_enc.h>
#include <freerdp/codec/mppc_dec.h>

struct rdp_bulk
{
	rdpContext* context;
	struct rdp_mppc_dec* mppc_dec;
	struct rdp_mppc_enc* mppc_enc;
};

void bulk_reset(rdpBulk* bulk);

rdpBulk* bulk_new(rdpContext* context);
void bulk_free(rdpBulk* bulk);

#endif /* FREERDP_CORE_BULK_H */
