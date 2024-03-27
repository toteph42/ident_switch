#!/usr/bin/env bash

# -- Standard Header --
echoerr() { printf "%s\n" "$*" >&2; }
export STATEFUL_DEBUG=

node scripts/publish_sitemap/publish.js
