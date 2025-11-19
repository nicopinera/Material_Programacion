topic = "/lan/sala1/temp"
temp = "10.5 °C"
hum = "90.50 %"

lista_topic = topic.split('/')
print(lista_topic)
list_temp = temp.split(' ')
list_hum = hum.split(' ')
print(float(list_temp[0]))
print(float(list_hum[0]))