var = input('Digite algo: ')

print("Qual tipo da variavel? {}".format(type(var)))
print("Só tem espaços: {}".format(var.isspace()))
print("É apenas numerico: {}".format(var.isnumeric()))
print("É apenas frase: {}".format(var.isalpha()))
print("É numero e letra: {}".format(var.isalnum()))
print("Está em maiusculas: {}".format(var.isupper()))
print("Está em minusculas: {}".format(var.islower()))
print("Está capitalizada: {}".format(var.istitle()))



