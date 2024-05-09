data = input()

dia_ou_mes = data[0:2]
dia_ou_mes = int(dia_ou_mes)

mes_ou_dia = data[3:5]
mes_ou_dia = int(mes_ou_dia)
#determinar se é dia ou mês
if dia_ou_mes <= 12:
    if mes_ou_dia <= 12:
        print("either")
    elif mes_ou_dia > 12:
        print("US")
else:
    print("EU")
