// |reftest| shell-option(--enable-regexp-duplicate-named-groups) skip-if(!(this.hasOwnProperty('getBuildConfiguration')&&!getBuildConfiguration('release_or_beta'))||!xulRuntime.shell) -- regexp-duplicate-named-groups is not enabled unconditionally, requires shell-options
// Copyright 2022 Igalia, S.L. All rights reserved.
// This code is governed by the BSD license found in the LICENSE file.

/*---
esid: sec-regexp.prototype.compile
description: Runtime parsing of syntax for duplicate named capturing groups
features: [regexp-duplicate-named-groups]
---*/

let r = /[ab]/;

assert.throws(
  SyntaxError,
  () => r.compile("(?<x>a)(?<x>b)"),
  "Duplicate named capturing groups in the same alternative do not parse"
);

let source = "(?<x>a)|(?<x>b)";
r.compile(source);
assert.sameValue(r.source, source, "Duplicate named capturing groups in separate alternatives parse correctly");

reportCompare(0, 0);
