''''
Author: Kevin Nikolai <kveidembaum@gmail.com>
'''

def posicao_alfabeto(letra: str) -> int:
    return ord(letra.upper()) - ord('A') + 1


def xls2Dec(xls_col: str) -> int:
    decimal_value = 0
    tamanho = len(xls_col)

    potencia = tamanho - 1


    for letra in xls_col:
        posicao_letra = posicao_alfabeto(letra)
        decimal_value += posicao_letra * (26 ** potencia)

        
        potencia -= 1


    return decimal_value



with open('desafio2.txt', 'r', encoding='utf-8') as txt:
    linhas = txt.read().splitlines()
    for linha in linhas[1:]:  
        print(linha, '=', xls2Dec(linha))
