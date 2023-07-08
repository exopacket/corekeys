#include <iostream>
#include "../corekeys/include/CoreKeys.h"
#include "../corekeys/encryption/include/EasyEncrypt.h"
#include <string>

int main() {
    uint32_t master_byte = 1;
    const char* master_id = "ABC";
    uint32_t key_byte = 1;
    const char* key_id = "ABC";

    std::string fail_res = EasyEncrypt::Utils::toHex((char*) CoreKeys::get(master_byte, master_id, key_byte, key_id).c_str(), 32);

    std::cout << "Random key from non-matching ids" << std::endl;
    std::cout << fail_res << std::endl;
    return 0;
}
