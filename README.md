# 🧠 Arduino Practice

**Arduino Practice** es una colección de proyectos prácticos diseñados para aprender, experimentar y reforzar conocimientos en electrónica y programación con **Arduino**.  
Cada carpeta dentro del repositorio representa un proyecto independiente con su propio código, esquemático y documentación, desarrollado utilizando **Visual Studio Code** con **PlatformIO**.

---

## 📂 Estructura del repositorio

```bash
arduino-practice/
├── led-blink/              # Primer proyecto: encender y apagar un LED
└── README.md               # Este archivo
```

Cada carpeta incluye su propio `README.md` con:

- Descripción del proyecto
- Componentes utilizados
- Diagrama de conexión (si aplica)
- Código fuente (`main.cpp`)
- Resultado esperado

---

## ⚙️ Objetivo

El objetivo de este repositorio es servir como una **guía progresiva de prácticas con Arduino**, desde los proyectos más básicos hasta implementaciones más avanzadas que combinan sensores, actuadores y comunicación serial.
Se busca fomentar el uso de **PlatformIO**, una herramienta moderna, flexible y potente para el desarrollo de firmware embebido.

---

## 🚀 Cómo usar este repositorio

1. Clona el proyecto:

   ```bash
   git clone https://github.com/notyel/arduino-practice.git
   ```

2. Abre la carpeta del proyecto que desees practicar en **Visual Studio Code**:

   ```bash
   cd arduino-practice/blink
   ```

3. Abre VS Code y selecciona **PlatformIO: Open Project**.

4. Conecta tu placa Arduino y selecciona el puerto serie desde PlatformIO.

5. Compila y sube el proyecto con el comando:

   ```bash
   pio run --target upload
   ```

---

## 🧩 Requisitos

- **Visual Studio Code**
- **Extensión PlatformIO IDE**
- **Placa Arduino compatible** (UNO, Nano, Mega, etc.)
- **Cable USB** para conexión y carga
- **Componentes electrónicos** según cada práctica (LEDs, resistencias, sensores, servos, etc.)

---

## 📘 Convenciones de commits

El repositorio sigue la convención de [Conventional Commits](https://www.conventionalcommits.org/) para mantener un historial limpio y coherente:

| Tipo       | Descripción                                         |
| ---------- | --------------------------------------------------- |
| `feat`     | Nueva práctica o funcionalidad                      |
| `fix`      | Corrección o mejora de una práctica existente       |
| `docs`     | Cambios en documentación o README                   |
| `refactor` | Reestructuración del código sin cambios funcionales |
| `chore`    | Mantenimiento, configuración o tareas menores       |
| `init`     | Configuración o estructura inicial del repositorio  |

Ejemplo:

```bash
feat(ultrasonic-sensor): agregar medición de distancia con trigger/echo
```

---

## 🧑‍💻 Autor

**Leyton Manuel Espitia Díaz**
Desarrollador y entusiasta de la electrónica aplicada con Arduino.
📍 Cartagena, Colombia

---

## 🪫 Licencia

Este proyecto se distribuye bajo la licencia **MIT**, lo que permite su uso libre para aprendizaje, experimentación y desarrollo personal.
