#pragma once
#include <pco.h>

class pco_edge final : public pco
{
	Q_OBJECT;

public:

	/*!
	 *  Constructor.
	 *
	 *      @param [in] camera_id
	 *      @param [in] parent
	 */
	explicit pco_edge(int camera_id, QObject* parent = NULL);

	/*!
	 *  Destructor.
	 */
	virtual ~pco_edge();

	/*!
	 *  Initializes the aois. Fill the aois vector with the area/region
	 *  of interest specific to the PCO panda camera.
	 */
	void initialize_aois() override;
};