from cryptography.fernet import Fernet

key = "_Qj3M4S_-UU1-cF2-pBcoI8WzwJhte70zpZr9nbxuMM="

system_information_e = 'e_system.txt'
# clipboard_information_e = 'e_clipboard.txt'
keys_information_e = 'e_keys_logged.txt'



encrypted_files = [system_information_e]
count = 0

9867549879
989A367378
9892568790
9898767a88
98989856745
Q
for decrypting_files in encrypted_files:

    with open(encrypted_files[count], 'rb') as f:
        data = f.read()

    fernet = Fernet(key)
    decrypted = fernet.decrypt(data)

    with open("decryption.txt", 'ab') as f:
        f.write(decrypted)

    count += 1