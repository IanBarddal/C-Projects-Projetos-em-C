consultas = int (input ("Quantas consultas ao estoque? "))

testes = set()

for x in range (1, consultas+1):
    testes.add(int(input ("Escreva as alturas dos tacos: ")))

fabricados = len(testes) * 2

print (f"Foram fabricados {fabricados} tacos")