pragma solidity >=0.4.22 <0.9.0;

contract Token {

    string  public name = "Merchant Plus Token";
    string  public symbol = "MPT";
    uint256 public totalSupply = 1000000000000000000000000;
    uint8   public decimals = 18;

    mapping(address => uint256) public balanceOf;
    mapping(address => mapping(address => uint256)) public allowance;

    constructor() public {
        balanceOf[msg.sender] = totalSupply;
    }

}