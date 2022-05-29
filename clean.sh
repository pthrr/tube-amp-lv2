#!/usr/bin/env bash
set -euo pipefail exec > ~/log.log 2>&1

cd "${0%/*}"
rm -r build/
