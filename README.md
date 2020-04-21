# RSA
RSA implementation in C++

Include RSA.h in your project to use 
	void encryption_key(long long int& e, long long int& d)
	
	void RSAencrypt(const long long int& e, string msg, vector<long long int>& en)
	
	void RSAdecrypt(const long long int& d, vector<long long int>& en, string& m)
	
Initialize the object with file containing te 2 primes as integers
  
# encryption_key
Generates encryption and decryption keys.

Encryption key is stored in e

Decryption key is stored in d

# RSAencrypt
e: Encryption Key

msg: Message to be Encrypted

en: Vector Containing Encrypted Message

# RSAdecrypt
d: Decryption Key

en: Message to be Decrypted

m: String Containing Decrypted Message
