def mapa_mental():

    nota_final = 0
    nota = 0
    for i in range(12):
        nota = float(input(f"Insira a nota do mapa mental {i}: "))
        nota_final = nota_final + nota

    return nota_final/12

def lista_exercicios():

    nota_final = 0
    nota = 0

    for i in range(6):
        nota = float(input(f"Insira a nota da lista {i}: "))
        nota_final = nota_final + nota

    return nota_final/6

def avaliacao_teorica():

    nota_final = 0
    nota = 0

    for i in range(9):          #sao 12, porem so conta as maiores 9

        nota = float(input(f"Insira a nota da avaliacao teorica {i}: "))
        nota_final = nota_final + nota

    return nota_final/9

def exercicio_pratico():
    nota_final = 0
    nota = 0

    for i in range(6):
        nota = float(input(f'Insira a nota do exercicio pratico {i}: '))
        nota_final = nota_final + nota

    return nota_final/6

def exercicio_escolar():
    nota_final = 0
    nota = 0

    for i in range(2):
        nota = float(input(f'Insira a nota do exercicio escolar {i}: '))
        nota_final = nota_final + nota

    return nota_final/2


def nota_final():

    mm = mapa_mental()
    le = lista_exercicios()
    at = avaliacao_teorica()
    ep = exercicio_pratico()
    ee = exercicio_escolar()

    nota1 = (le*4 + ep*6)/10
    nota2 = (mm + at*2 + ee*7)/10

    nota_final = (nota1 + nota2)/2

    if nota_final >= 6.7:
        print(f'Nota final: { nota_final }. Passou por media.')
    elif nota_final < 6.7 and nota_final >= 2.7:
        print(f'Nota final: { nota_final }. Recuperacao.')
    else:
        print(f'Nota final: { nota_final }. Reprovou direto.')





