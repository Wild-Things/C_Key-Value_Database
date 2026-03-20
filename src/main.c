#include <stdio.h>
#include <kv.h>

int main() {
	kv_t *table = kv_init(1024);
	printf("%p\n", table);

	printf("capacity = %ld\n", table->capacity);

	kv_put(table, "hehe", "haha");
	kv_put(table, "hehe", "homegalul");
	kv_put(table, "lala", "hoho");
	kv_put(table, "color", "red");
	kv_put(table, "color", "blue");

	char *val = kv_get(table, "hehe");
	char *val2 = kv_get(table, "lala");
	char *val3 = kv_get(table, "nope.jpg");

	for (int i = 0; i < table->capacity; i++) {
		if (table->entries[i].key) {
			printf("[%d] %s: %s\n",
			i,	
			table->entries[i].key, 
			table->entries[i].value);
		}
	}

	printf("%s, %s, %s\n", val, val2, val3);

}
