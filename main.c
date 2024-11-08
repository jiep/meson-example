#include <stdio.h>
#include <openssl/sha.h>

int main(void){
    const unsigned char data_to_hash[] = "Hello World!";
    unsigned char hash[SHA256_DIGEST_LENGTH] = {0};

    SHA256(data_to_hash, 12, hash);

    printf("SHA-256(\"%s\") = ", data_to_hash);
    for(unsigned int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
	    printf("%02hhX", hash[i]);
    }
    printf("\n");
    return 0;
}