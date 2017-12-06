var assert = require('assert');

var hugs = require('..');
var Hugs = new hugs;
Hugs.init();

describe("DDD", function(){
  it("eval 1 + 1", function(){
    assert.equal('2', Hugs.run('1+1'));
  });
});
