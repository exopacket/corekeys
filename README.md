# corekeys

CoreKeys is a very methodical way to mask encryption keys within a stored executable as well as within memory. While it may seem like overkill, every aspect of this codebase is engineered to prevent key attacks and vulnerabilities in the code itself. By generating the code's seeds, magic values, keys, key ids, and initialization vectors prior to build, each build for your application will be unique to the application. In the executable, all keys and ids will be seeded and thus masked from the usual key attacks. In memory, each key is loaded and unloaded only during encryption/decryption. The snapshot of the memory would have to be very precise to catch the key. By making use of both social engineering, reverse psychology, and the general way software -> users works, this codebase is a unique approach to having secure encryption keys.
<br><br>
TODO<br>
[ ] Dynamic key ids<br>
[ ] Finish it overall
