''''
Author: Kevin Nikolai <kveidembaum@gmail.com>
'''

def descriptografar(pontos: str) -> str:
    quantidade_pontos = pontos.replace(" ", "").count(".")
    return chr(96 + quantidade_pontos)




with open('desafio.txt', 'r', encoding='utf-8') as txt:
    linhas = txt.read().splitlines()
    for msg_criptografada in linhas[1:]:
        print(descriptografar(msg_criptografada), '<-', msg_criptografada)
