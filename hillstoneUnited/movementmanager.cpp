#include "movementmanager.h"

MovementManager::MovementManager(){
}

MovementManager::~MovementManager(){}


std::string MovementManager::nextStr(Action& act, World& w){

	std::cout << "(in mm)" << act.getName() << std::endl;


  switch(act.getName()){
    case DUMMY:
      return dummy.getNextAngle(act, w);
      break;
    case FFORWARD:
    case STOP:
      std::cout << "do nothing!" << std::endl;
      return "hoge";
      break;
    case FORWARD:
      return forward.getNextAngle(act, w);
      break;
    case SLOW_FORWARD:
      return slowForward.getNextAngle(act, w);
      break;
    case DRIBBLE:
      return dribble.getNextAngle(act, w);
      break;
    case R_DRIBBLE:
      return rDribble.getNextAngle(act, w);
      break;
    case L_DRIBBLE:
      return lDribble.getNextAngle(act, w);
      break;
    case R_DRIBBLE_SHARP:
      return rDribbleSharp.getNextAngle(act, w);
      break;
    case L_DRIBBLE_SHARP:
      return lDribbleSharp.getNextAngle(act, w);
      break;
    case BACK:
      return back.getNextAngle(act, w);
      break;
    case SLOW_BACK:
      return slowBack.getNextAngle(act, w);
      break;
    case TLEFT:
      return tLeft.getNextAngle(act, w);
      break;
    case TRIGHT:
      return tRight.getNextAngle(act, w);
      break;
    case TLEFT_IN:
      return tLeftIn.getNextAngle(act, w);
      break;
    case TRIGHT_IN:
      return tRightIn.getNextAngle(act, w);
      break;
    case SLEFT:
      return sLeft.getNextAngle(act, w);
      break;
    case SRIGHT:
      return sRight.getNextAngle(act, w);
      break;
    case LAROUND:
    case FLEFT:
    case FRIGHT:
    case KICK:
      std::cout << "do nothing!" << std::endl;
      return "hoge";
      break;
    case GA_FORWARD:
      return gaForward.getNextAngle(act, w);
      break;
    case GA_BACK:
      return gaBack.getNextAngle(act, w);
      break;
    case GA_L_DRIBBLE_SHARP:
      return galDribbleSharp.getNextAngle(act, w);
      break;
    case GA_R_DRIBBLE_SHARP:
      return garDribbleSharp.getNextAngle(act, w);
      break;
    case GA_SLEFT:
      return gasLeft.getNextAngle(act, w);
      break;
    case GA_SRIGHT:
      return gasRight.getNextAngle(act, w);
      break;
    case GAWALKING:
      std::cout << "don't use GAWalking!!!!" << std::endl;
      break;
    case FFWALK:
      std::cout << "do nothing!" << std::endl;
      return "hoge";
      break;
    case STANDUP:
      return standup.getNextAngle(act, w);
      break;
    default:
      std::cerr << "Walking::nextAngle : error" << std::endl;
      break;
    }
}

