/**
 *   BSD LICENSE
 *
 *   Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of Samsung Electronics Co., Ltd. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _KVCMD_H_
#define _KVCMD_H_

int _kv_nvme_store(kv_nvme_t *nvme, const kv_pair *kv, int core_id, uint8_t is_store);
int _kv_nvme_store_async(kv_nvme_t *nvme, const kv_pair *kv, int core_id);
int _kv_nvme_retrieve(kv_nvme_t *nvme, kv_pair *kv, int core_id);
int _kv_nvme_retrieve_async(kv_nvme_t *nvme, kv_pair *kv, int core_id);
int _kv_nvme_delete(kv_nvme_t *nvme, const kv_pair *kv, int core_id);
int _kv_nvme_delete_async(kv_nvme_t *nvme, const kv_pair *kv, int core_id);
int _kv_nvme_format(kv_nvme_t *nvme);
uint64_t _kv_nvme_get_used_size(kv_nvme_t* nvme);
int _kv_nvme_exist(kv_nvme_t* nvme, const kv_key_list* key_list, kv_value* result, int core_id);
uint32_t _kv_nvme_iterate_open(kv_nvme_t *nvme, const uint32_t bitmask, const uint32_t prefix, const uint8_t iterate_type, int core_id);
int _kv_nvme_iterate_close(kv_nvme_t *nvme, const uint8_t iterator, int core_id);
int _kv_nvme_iterate_read(kv_nvme_t* nvme, kv_iterate* it, int core_id);
int _kv_nvme_iterate_read_async(kv_nvme_t *nvme, kv_iterate* it, int core_id);

#endif


