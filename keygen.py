string = "THOMAZ"

soma = 0
for char in string:
    soma = soma + ord(char)

chave = soma ^ 0x5678 ^ 0x1234
print ('Chave: '+ str(chave))
