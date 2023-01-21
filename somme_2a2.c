#include <stdlib.h>
#include <stdint.h>

uint32_t* somme_2a2(uint32_t* vett, size_t size) {

	uint32_t* res=malloc((size/2) * sizeof(uint32_t));


	if (vett == NULL) {

		return NULL;
	}

	else {

		for (size_t i = 0; i + 1 < size; i += 2) {

			res[i/2] = vett[i] + vett[i + 1];

		}
	
		return res;
	}



}