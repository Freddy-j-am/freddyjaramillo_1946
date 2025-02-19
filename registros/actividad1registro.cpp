#include <iostream>
using namespace std;

struct rAutomoviles {
    int codigoA;
    string marca;
    string modelo;
    int anio;
    string placa;
} r1 = {1234, "Toyota", "Corolla", 2020, "XYZ-123"};

struct clienteVideoclub {
    string nombre;
    string direccion;
    int telefono;
    int adeuda;
    int codigocl;
} c1 = {"Juan Perez", "Av. Principal 123", 987654321, 500, 5678};

struct licenciaManejo {
    string nombres;
    string apellidoPaterno;
    string apellidoMaterno;
    string fechaDesde;
    string fechaVencimiento;
    string nacionalidad;
    string grupoSanguineo;
    string tipoLicencia;
    string restricciones;
    string donaOrganos;
    string direccion;
    int cedula;
} l1 = {"Carlos", "Gomez", "Fernandez", "01/01/2022", "01/01/2032", "Mexicana", "O+", "A", "Ninguna", "Si", "Calle Falsa 123", 12345678};

struct tarjetaCredito {
    string nombre;
    string fechaVencimiento;
    int numeroTarjeta;
    int saldo;
    int limite;
} t1 = {"Luis Martinez", "12/2027", 987654321, 15000, 50000};

int main() {
    cout << "Datos inicializados correctamente." << endl;
    return 0;
}
