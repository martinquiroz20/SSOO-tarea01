# SSOO-tarea01
Tarea 1 SO Martin Quiroz
Alumno Martin Quiroz Quevedo
Mail Martin.quirozq@alumnos.uv.cl

Primero que nada mi forma de guiarme fue en base al codigo enviado por el profesor el cual estaba hecho en c++, luego convirtiendo el codigo a C me fui guiando en base a materia y paginas donde pude averiguar sobre la senal SIGUSR1. Utilize una funcion tiempo en donde nos entregan la hora, fecha y dia del computador, la cual se llama cuando llega la senal SIGUSR1. Generamos la funcion SIGINT generada con Control-C y SIGTERM que solicita al proceso limpiar su estado y salir. En conclusion el programa funciona a lo que pidieron paso a paso, creando 2 terminales en donde en uno se espera la senal con el PID, y del otro se manda por un kill -s del PID dado del otro terminal, lanzando como objetivo la hora correspondiente del computador, y si se desea cerrar el programa hay que apretar 2 veces Control-C. Por ultimo se creo el Makefile para agilizar la tarea de compilar el codigo hecho.
