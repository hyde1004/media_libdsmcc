#ifndef DSMCC_CACHE_MODULE_H
#define DSMCC_CACHE_MODULE_H

#include <stdint.h>

#include "dsmcc-cache.h"

/* from dsmcc-carousel.h */
struct dsmcc_object_carousel;

struct dsmcc_module_info
{
	uint32_t module_size;
	uint32_t block_size;

	bool     compressed;
	uint8_t  compress_method;
	uint32_t uncompressed_size;

	uint32_t mod_timeout;
	uint32_t block_timeout;
};

struct dsmcc_module;

void dsmcc_cache_remove_unneeded_modules(struct dsmcc_object_carousel *carousel, struct dsmcc_module_id *modules_id, int number_modules);
void dsmcc_cache_add_module_info(struct dsmcc_object_carousel *carousel, struct dsmcc_module_id *module_id, struct dsmcc_module_info *module_info);
void dsmcc_cache_save_module_data(struct dsmcc_object_carousel *carousel, struct dsmcc_module_id *module_id, uint16_t block_number, uint8_t *data, int length);
void dsmcc_cache_update_filecache(struct dsmcc_object_carousel *carousel);
void dsmcc_cache_clear_filecache(struct dsmcc_object_carousel *carousel);
void dsmcc_cache_update_carousel_completion(struct dsmcc_object_carousel *carousel);
void dsmcc_cache_free_all_modules(struct dsmcc_object_carousel *carousel, bool keep_cache);
bool dsmcc_cache_load_modules(FILE *file, struct dsmcc_object_carousel *carousel);
void dsmcc_cache_save_modules(FILE *file, struct dsmcc_object_carousel *carousel);

#endif /* DSMCC_CACHE_MODULE_H */
