# AES Lean 4

Implementierung und formale Verifikation des AES-Algorithmus (Advanced Encryption Standard) in Lean 4, unter Verwendung von Mathlib.

# Installation

Dieses Projekt benötigt eine Installation von Lean 4 sowie das Build-Werkzeug `lake`.

## 1. Lean 4 installieren

Der empfohlene Weg, Lean 4 zu installieren, ist über `elan`, den Versionsmanager von Lean:

- Folgen Sie den offiziellen Anweisungen: [Install Lean](https://lean-lang.org/install/)
- Unter Linux/macOS:
  ```bash
  curl https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh -sSf | sh
  ```
- Unter Windows laden Sie den Installer von der [elan-Seite](https://github.com/leanprover/elan) herunter.

Überprüfen Sie die Installation:
```bash
lean --version
lake --version
```

## 2. Repository klonen

```bash
git clone https://github.com/klandry98/lean_4.git
cd lean_4
```

## 3. Abhängigkeiten abrufen

Das Projekt hängt von [Mathlib](https://github.com/leanprover-community/mathlib4) ab, deklariert in `lakefile.lean`. Zum Herunterladen und Laden des Caches:

```bash
lake update
lake exe cache get
```

## 4. Projekt kompilieren

```bash
lake build
```

# Projektinhalt

- `AES-zustand.lean` — Definition des AES-Zustands
- `E_Algorithmus.lean` — Verschlüsselungsalgorithmus
- `Implementierung_AES.lean` — Hauptimplementierung (S-Box, Transformationen)
- `xor-verknüpfung.lean` — XOR-Verknüpfung auf Blöcken
- `lakefile.lean` — Konfiguration des Lake-Projekts
